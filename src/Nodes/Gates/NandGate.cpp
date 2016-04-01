/*
 * NandGate.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "NandGate.h"

#include <iostream>
using namespace std;

NandGate NandGate::instance("NAND");

NandGate::NandGate(const char* szArg) : LogicGate(szArg) {
}

NandGate::NandGate() {

}

NandGate::~NandGate() {
	// TODO Auto-generated destructor stub
}

Node* NandGate::clone() {
    return new NandGate();
}

bool NandGate::backPropagate() {
    return !(inputs[0]->backPropagate() && inputs[1]->backPropagate());
}
