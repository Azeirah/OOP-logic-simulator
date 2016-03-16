/*
 * NodeFactory.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef NODEFACTORY_H_
#define NODEFACTORY_H_

#include "Node.h"
#include <string>
#include <map>

class NodeFactory {
public:
	NodeFactory();
	virtual ~NodeFactory();
    static void assign(std::string name, Node* node);
    static void get(std::string name, Node*& node);
    static std::map<std::string, Node*>& getMap();
};

#endif /* NODEFACTORY_H_ */
