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

InputHighGate::InputHighGate( const char* szArg ) : LogicGate(szArg) {
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
