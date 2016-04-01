/*
 * StartNode.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "StartNode.h"

StartNode::StartNode() {
	// TODO Auto-generated constructor stub

}

StartNode::~StartNode() {
	// TODO Auto-generated destructor stub
}

Node* StartNode::clone() {
    return new StartNode();
}

bool StartNode::validateInputAmount() {
	if(inputs.size() != 0)
		return false;
	return true;
}

bool StartNode::validateOutputAmount() {
	if(outputs.size() < 1)
		return false;
	return true;
}