/*
 * OrGate.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "OrGate.h"
using namespace std;

OrGate OrGate::instance("OR");

OrGate::OrGate( const char* szArg ) : Node(szArg) {

}

OrGate::OrGate() {
	// TODO Auto-generated constructor stub

}

OrGate::~OrGate() {
	// TODO Auto-generated destructor stub
}

Node* OrGate::clone() {
    return new OrGate();
}

bool OrGate::backPropagate() {
    return inputs[0]->backPropagate() || inputs[1]->backPropagate();
}
