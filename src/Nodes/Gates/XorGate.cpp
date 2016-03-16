/*
 * XorGate.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "XorGate.h"
#include <iostream>
using namespace std;

XorGate XorGate::instance("XOR");

XorGate::XorGate( const char* szArg ) : LogicGate(szArg) {
}

XorGate::XorGate() {
	// TODO Auto-generated constructor stub
}

XorGate::~XorGate() {
	// TODO Auto-generated destructor stub
}

Node* XorGate::clone() {
    return new XorGate();
}
