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

void NodeFactory::assign(string name, Node node) {
    map<string, Node> factoryMap = getMap();

    factoryMap[name] = node;
}

Node NodeFactory::get(string name) {
    map<string, Node> factoryMap = getMap();
    return factoryMap[name];
}

map<string, Node> NodeFactory::getMap() {
    static map<string, Node> factoryMap;

    return factoryMap;
}
