/*
 * LogicGate.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "LogicGate.h"

LogicGate::LogicGate( const char* szArg) : Node(szArg) {

}

LogicGate::LogicGate() {
	// TODO Auto-generated constructor stub

}

LogicGate::~LogicGate() {
	// TODO Auto-generated destructor stub
}

Node* LogicGate::clone() {
    return new LogicGate();
}
