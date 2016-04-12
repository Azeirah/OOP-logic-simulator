/*
 * InputHighGate.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */
#include "InputHighGate.h"
#include <iostream>
using namespace std;

InputHighGate InputHighGate::instance("INPUT_HIGH");

InputHighGate::InputHighGate( const char* szArg ) : Node(szArg) {
}

InputHighGate::InputHighGate() {
}

InputHighGate::~InputHighGate() {
	// TODO Auto-generated destructor stub
}

Node* InputHighGate::clone() {
    return new InputHighGate();
}

bool InputHighGate::backPropagate() {
    return true;
}

bool InputHighGate::validateInputAmount() {
	if(inputs.size() != 0)
		return false;
	return true;
}

bool InputHighGate::validateOutputAmount() {
	if(outputs.size() < 1)
		return false;
	return true;
}

bool InputHighGate::checkCircularDependency(int count, int maxCount, Node* node) {
	bool ret;
	if (count > maxCount) //check if max count is reached
		return false;
	for (auto const &output : node->outputs) { //loop through all outputs
		ret = checkCircularDependency(count+1, maxCount, output); //do this function for each node
		if(!ret)
			return false;
	}
	return true;
}
