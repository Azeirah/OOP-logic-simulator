/*
 * AndGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef ANDGATE_H_
#define ANDGATE_H_

#include "../LogicGate.h"

class AndGate: public LogicGate {
public:
	AndGate();
	virtual ~AndGate();
	void printInfo();
private:
    static AndGate self_AndGate;
};

#endif /* ANDGATE_H_ */
