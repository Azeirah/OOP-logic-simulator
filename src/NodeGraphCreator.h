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
#include <utility>
#include <vector>

class NodeGraphCreator {
public:
	NodeGraphCreator();
	virtual ~NodeGraphCreator();
	void createNode(std::string name, std::string type);
	void showStoredNodes();
	void createLink(string origin, vector<string> destinations);
	void parseParserOutput(map<string,string> *nodes, map<string, vector<string> > *edges);


private:
	std::map<std::string, Node*> nodeMap;
};

#endif /* NODEGRAPHCREATOR_H_ */
