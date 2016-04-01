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

InputLowGate::InputLowGate( const char* szArg ) : LogicGate(szArg) {
}

InputLowGate::InputLowGate() {
}

InputLowGate::~InputLowGate() {
	// TODO Auto-generated destructor stub
}

Node* InputLowGate::clone() {
    return new InputLowGate();
}
