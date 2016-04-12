/*
 * NodeFactory.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "NodeFactory.h"

using namespace std;

NodeFactory::NodeFactory() {

}

NodeFactory::~NodeFactory() {
}

// Each specific Node type assigns itself to the factory,
// which stores the Node in a map with its type as String
void NodeFactory::assign(std::string name, Node* node) {
    std::map<std::string, Node*>& factoryMap = getMap();
    factoryMap[name] = node;
}

// Fills the pointerreference with a clone of the requested type
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
