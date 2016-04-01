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

ProbeGate::ProbeGate( const char* szArg ) : LogicGate(szArg) {
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
