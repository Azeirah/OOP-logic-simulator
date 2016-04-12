/*
 * NodeGraphCreator.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "NodeGraphCreator.h"
#include "Node.h"
#include "NodeFactory.h"

NodeGraphCreator::NodeGraphCreator() {
}

NodeGraphCreator::~NodeGraphCreator() {
}


// Retreives and saves a copy from the Node of the type defined in the argument
void NodeGraphCreator::createNode(std::string name, std::string type) {
	Node* node; //As the NodeFactory is void, we pass it a pointer to work with
	NodeFactory::get(type, node);
	nodeMap[name] = node;

	// We need to define the endpoints for our backwards propegation
	// Store all of them in a map
	if (type == "PROBE") {
		endNodeMap[name] = node;
	}
}

// This method is used to assign neighbours to a certain node
// As the text file syntax always uses "ORIGIN:	DESTINATION1,DESTINATION2;"
// we can always assume the destinations are outputs for the origin
// and each destination treats the origin as input
void NodeGraphCreator::createLink(string origin, vector<string> destinations) {
	Node* originPointer = nodeMap[origin]; // Find the origin Node
	vector<Node*> destinationPointers;
	
	for (std::vector<string>::const_iterator i = destinations.begin(); i != destinations.end(); ++i) {
		Node* destination = nodeMap[*i]; // Retreive the current destination node
		if (originPointer != nullptr) {
			originPointer->addOutput(destination);
		}

		if (destination != nullptr) {
			destination->addInput(originPointer);
		}

	}

}

// The file Parser returns a map of Nodes by Name and Type (string) and a map of Links
// First we initialize all the Nodes
// Afterwards we will link them by setting their neighbours
std::map<std::string, Node*> NodeGraphCreator::parseParserOutput(map<string,string> *nodes, map<string, vector<string> > *edges) {
	//Nodes
	for (std::map<string, string>::iterator it = nodes->begin(); it != nodes->end(); it++) {
		createNode(it->first,it->second);
	}

	//Edges
	for (std::map<string, vector<string>>::iterator it = edges->begin(); it != edges->end(); it++) {
		createLink(it->first,it->second);
	}

	return nodeMap;
}

//For debug purpuse
void NodeGraphCreator::showStoredNodes() {
	for (std::map<std::string, Node*>::iterator it = nodeMap.begin(); it != nodeMap.end(); it++) {
		cout << it->first << " op adres " << it->second << endl;
	}
}

std::map<std::string, Node*> NodeGraphCreator::getEndNodes() {
	return endNodeMap;
}	

