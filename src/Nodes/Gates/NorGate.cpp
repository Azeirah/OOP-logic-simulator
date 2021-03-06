/*
 * NorGate.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "NorGate.h"

#include <iostream>
using namespace std;

NorGate NorGate::instance("NOR");

NorGate::NorGate( const char* szArg) : Node(szArg) {

}

NorGate::NorGate() {
	// TODO Auto-generated constructor stub

}

NorGate::~NorGate() {
	// TODO Auto-generated destructor stub
}

Node* NorGate::clone() {
    return new NorGate();
}

bool NorGate::backPropagate() {
    return !(inputs[0]->backPropagate() || inputs[1]->backPropagate());
}
