/*
 * Node.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "NodeFactory.h"
#include "Node.h"
#include <iostream>
using namespace std;

Node::Node(const string& gateName) {
    NodeFactory::assign(gateName, this);
}

Node::Node() {
	// TODO Auto-generated constructor stub

}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

void Node::addInput(Node* input) {
	this->inputs.push_back(input);
}

void Node::addOutput(Node* output) {
	this->outputs.push_back(output);
}

int Node::validateInputOutput(int maximumNodes) {
	//check amount of input
	if(!validateInputAmount())
		return INPUT_ERROR;
	
	//check amount of output
	if(!validateOutputAmount())
		return OUTPUT_ERROR;
	
	//check for local circular dependency 
	for (auto const &input : inputs) {
		for (auto const &output : outputs) {
			if(input == output)
				return LOCAL_CIRCULAR_DEPENDENCY;
		}
	}
	//check for circular dependency
	if(!checkCircularDependency(0, maximumNodes, this))
		return CIRCULAR_DEPENDENCY;

	//valid node
	return VALID;
}

bool Node::checkCircularDependency(int count, int maxCount, Node* node) {
	return true;
}

bool Node::validateInputAmount() {
	if(inputs.size() != 2)
		return false;
	return true;
}

bool Node::validateOutputAmount() {
	return true;
}

Node* Node::clone() {
    return new Node();
}

bool Node::backPropagate() {
    cout << "generic backPropagate is called, shouldn't happen :(" << endl;
    return false;
}
