/*
 * NodeFactory.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "NodeFactory.h"

using namespace std;

NodeFactory::NodeFactory() {
	// TODO Auto-generated constructor stub

}

NodeFactory::~NodeFactory() {
	// TODO Auto-generated destructor stub
}

void NodeFactory::assign(std::string name, Node* node) {
    std::map<std::string, Node*>& factoryMap = getMap();
    factoryMap[name] = node;
}

void NodeFactory::get(std::string name, Node*& node) {
    std::map<std::string, Node*>& factoryMap = getMap();
    std::map<std::string, Node*>::iterator iFind = factoryMap.find(name);
    if ( iFind == factoryMap.end() )
        node = nullptr;
    else
        node = factoryMap[name]->clone();
}

std::map<std::string, Node*>& NodeFactory::getMap() {
    static std::map<std::string, Node*> factoryMap;

    return factoryMap;
}
