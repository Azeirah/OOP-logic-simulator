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
    NotGate(const char*);
public:
	NotGate();
	virtual ~NotGate();
    virtual Node* clone();
    virtual bool backPropagate();

private:
    static NotGate instance;

private:
	virtual bool validateInputAmount();
	virtual bool validateOutputAmount();
};

#endif /* NOTGATE_H_ */
