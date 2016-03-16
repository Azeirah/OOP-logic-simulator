/*
 * AndGate.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */
#include "../../NodeFactory.h"
#include "AndGate.h"
#include <iostream>
using namespace std;

AndGate::AndGate() {
	// TODO Auto-generated constructor stub
    NodeFactory::assign("AND", this);
}

AndGate::~AndGate() {
	// TODO Auto-generated destructor stub
}
