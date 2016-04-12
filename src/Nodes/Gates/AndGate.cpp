/*
 * AndGate.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */
#include "AndGate.h"
#include <iostream>
using namespace std;

AndGate AndGate::instance("AND");

AndGate::AndGate( const char* szArg ) : Node(szArg) {
}

AndGate::AndGate() {
}

AndGate::~AndGate() {
	// TODO Auto-generated destructor stub
}

Node* AndGate::clone() {
    return new AndGate();
}

bool AndGate::backPropagate() {
    return inputs[0]->backPropagate() && inputs[1]->backPropagate();
}
