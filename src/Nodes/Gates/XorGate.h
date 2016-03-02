/*
 * XorGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef XORGATE_H_
#define XORGATE_H_

#include "../LogicGate.h"

class XorGate: public LogicGate {
public:
	XorGate();
	virtual ~XorGate();
	void printInfo();
};

#endif /* XORGATE_H_ */
