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

int Node::validateInputOutput() {
	//check amount of input
	if(!validateInputAmount())
		return INPUT_ERROR;
	//check amount of output
	if(!validateOutputAmount())
		return OUPUT_ERROR;
	//check for circular dependency 
	for (std::vector<Node*>::const_iterator i = inputs.begin(); i != inputs.end(); ++i) {
		for (std::vector<Node*>::const_iterator j = outputs.begin(); j != outputs.end(); ++j) {
			if(inputs[i] == outputs[j])
				return LOCAL_CIRCULAR_DEPENDENCY;
		}
	}
	//valid node
	return VALID;
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
