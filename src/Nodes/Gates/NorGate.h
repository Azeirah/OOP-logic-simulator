/*
 * NorGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef NORGATE_H_
#define NORGATE_H_

#include "../LogicGate.h"

class NorGate: public LogicGate {
public:
	NorGate();
	virtual ~NorGate();
	void printInfo();
};

#endif /* NORGATE_H_ */
