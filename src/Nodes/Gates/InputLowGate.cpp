/*
 * InputLowGate.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */
#include "InputLowGate.h"
#include <iostream>
using namespace std;

InputLowGate InputLowGate::instance("INPUT_LOW");

InputLowGate::InputLowGate( const char* szArg ) : Node(szArg) {
}

InputLowGate::InputLowGate() {
}

InputLowGate::~InputLowGate() {
	// TODO Auto-generated destructor stub
}

Node* InputLowGate::clone() {
    return new InputLowGate();
}

bool InputLowGate::backPropagate() {
    return false;
}

bool InputLowGate::validateInputAmount() {
	if(inputs.size() != 0)
		return false;
	return true;
}

bool InputLowGate::validateOutputAmount() {
	if(outputs.size() < 1)
		return false;
	return true;
}

bool InputLowGate::checkCircularDependency(int count, int maxCount, Node* node) {
	bool ret;
	if (count > maxCount)
		return false;
	for (auto const &output : node->outputs) {
		ret = checkCircularDependency(count+1, maxCount, output);
		if(!ret)
			return false;
	}
	return true;
}
