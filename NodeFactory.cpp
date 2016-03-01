/*
 * NodeFactory.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "NodeFactory.h"

NodeFactory::NodeFactory() {
	// TODO Auto-generated constructor stub

}

NodeFactory::~NodeFactory() {
	// TODO Auto-generated destructor stub
}

void NodeFactory::assign(std::string name, Node *node) {
    std::map<std::string, Node*> factoryMap = getMap();

    factoryMap[name] = node;
}

Node* NodeFactory::get(std::string name) {
    std::map<std::string, Node*> factoryMap = getMap();
    return factoryMap[name];
}

std::map<std::string, Node*> NodeFactory::getMap() {
    static std::map<std::string, Node*> factoryMap;

    return factoryMap;
}
