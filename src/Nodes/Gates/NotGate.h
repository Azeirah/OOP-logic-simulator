/*
 * NotGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef NOTGATE_H_
#define NOTGATE_H_

#include "../LogicGate.h"

class NotGate: public LogicGate {
public:
	NotGate();
	virtual ~NotGate();
	void printInfo();
};

#endif /* NOTGATE_H_ */
