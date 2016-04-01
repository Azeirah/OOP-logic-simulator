/*
 * EndNode.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "EndNode.h"

EndNode::EndNode() {
	// TODO Auto-generated constructor stub

}

EndNode::~EndNode() {
	// TODO Auto-generated destructor stub
}

Node* EndNode::clone() {
    return new EndNode();
}

bool EndNode::validateInputAmount() {
	if(inputs.size() != 1)
		return false;
	return true;
}

bool EndNode::validateOutputAmount() {
	if(outputs.size() > 0)
		return false;
	return true;
}