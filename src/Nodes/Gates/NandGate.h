/*
 * NandGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef NANDGATE_H_
#define NANDGATE_H_

#include "../LogicGate.h"

class NandGate: public LogicGate {
public:
	NandGate();
	virtual ~NandGate();
	void printInfo();
};

#endif /* NANDGATE_H_ */
