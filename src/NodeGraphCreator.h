/*
 * NodeGraphCreator.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef NODEGRAPHCREATOR_H_
#define NODEGRAPHCREATOR_H_

#include "Node.h"
#include <string>
#include <iostream>
using namespace std;
#include <map>

class NodeGraphCreator {
public:
	NodeGraphCreator();
	virtual ~NodeGraphCreator();
	void createNode(std::string name, std::string type);
	void showStoredNodes();

private:
	std::map<std::string, Node*> nodeMap;
};

#endif /* NODEGRAPHCREATOR_H_ */
