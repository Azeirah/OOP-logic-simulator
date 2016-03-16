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

void NodeGraphCreator::createLink(string origin, string destinations[]) {


}

void NodeGraphCreator::parseParserOutput(map<string,string> *nodes, map<string, string> *edges) {
	//Nodes
	for (std::map<string, string>::iterator it = nodes->begin(); it != nodes->end(); it++) {
		createNode(it->first,it->second);
	}

	//Edges
	for (std::map<string, string>::iterator it = edges->begin(); it != edges->end(); it++) {
		createLink(it->first,it->second);
	}

}

void NodeGraphCreator::showStoredNodes() {
	cout << "Hier moet een node" << endl;
	for (std::map<std::string, Node*>::iterator it = nodeMap.begin(); it != nodeMap.end(); it++) {
		cout << it->first << " op adres " << it->second << endl;
	}
}
