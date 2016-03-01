/*
 * AndGate.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */
#include "../../NodeFactory.h"
#include "AndGate.h"

std::cout << "YO MAN IK DOE IETS" << endl;

NodeFactory::assign("AND", AndGate{});

AndGate::AndGate() {
	// TODO Auto-generated constructor stub
    std::cout << "Ik ben een nieuwe and gate." << endl;
}

AndGate::~AndGate() {
	// TODO Auto-generated destructor stub
}

