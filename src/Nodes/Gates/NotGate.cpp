/*
 * NotGate.cpp
 *
*  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "NotGate.h"

#include <iostream>
using namespace std;

NotGate NotGate::instance("NOT");

NotGate::NotGate( const char* szArg ) : LogicGate(szArg) {
}

NotGate::NotGate() {
	// TODO Auto-generated constructor stub
}

NotGate::~NotGate() {
	// TODO Auto-generated destructor stub
}

Node* NotGate::clone() {
    return new NotGate();
}

bool NotGate::backPropagate() {
    return !inputs[0]->backPropagate();
}

bool NotGate::validateInputAmount() {
	if(inputs.size() != 1)
		return false;
	return true;
}

bool NotGate::validateOutputAmount() {
	return true;
}