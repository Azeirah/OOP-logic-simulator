/*
 * ProbeGate.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */
#include "ProbeGate.h"
#include <iostream>
using namespace std;

ProbeGate ProbeGate::instance("PROBE");

ProbeGate::ProbeGate( const char* szArg ) : Node(szArg) {
}

ProbeGate::ProbeGate() {
}

ProbeGate::~ProbeGate() {
	// TODO Auto-generated destructor stub
}

Node* ProbeGate::clone() {
    return new ProbeGate();
}

bool ProbeGate::backPropagate() {
    return inputs[0]->backPropagate();
}

bool ProbeGate::validateInputAmount() {
	if(inputs.size() != 1)
		return false;
	return true;
}

bool ProbeGate::validateOutputAmount() {
	if(outputs.size() > 0)
		return false;
	return true;
}
