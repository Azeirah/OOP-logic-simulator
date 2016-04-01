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
	// TODO Auto-generated constructor stub
}

NodeGraphCreator::~NodeGraphCreator() {
	// TODO Auto-generated destructor stub
}

void NodeGraphCreator::createNode(std::string name, std::string type) {
	Node* node;
	NodeFactory::get(type, node);
	cout << type << " type met adres " << node << endl;
	nodeMap[name] = node;
}

void NodeGraphCreator::createLink(string origin, vector<string> destinations) {
	Node* originPointer = nodeMap[origin];
	vector<Node*> destinationPointers;
	cout << origin << " met adress " << originPointer << endl;
	for (std::vector<string>::const_iterator i = destinations.begin(); i != destinations.end(); ++i) {
		Node* destination = nodeMap[*i];
		if (originPointer != nullptr) {
			originPointer->addOutput(destination);
			cout << "Pushed " << destination << " to node " << originPointer << " ass output " << endl;
		}

		if (destination != nullptr) {

			destination->addInput(originPointer);
			cout << "Pushed " << originPointer << " to node " << destination << " ass input " << endl;
		}

	}
	cout << endl;
	cout << endl;


}

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

void NodeGraphCreator::showStoredNodes() {
	cout << "Start of showStoredNodes" << endl;
	for (std::map<std::string, Node*>::iterator it = nodeMap.begin(); it != nodeMap.end(); it++) {
		cout << it->first << " op adres " << it->second << endl;
	}
}
