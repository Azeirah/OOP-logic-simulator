/*
 * NodeFactory.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef NODEFACTORY_H_
#define NODEFACTORY_H_

using namespace std;

#include "Node.h"
#include <string>
#include <map>

class NodeFactory {
public:
	NodeFactory();
	virtual ~NodeFactory();
    static void assign(string name, Node node);
    static Node get(string name);
    static map<string, Node> getMap();
};

#endif /* NODEFACTORY_H_ */
