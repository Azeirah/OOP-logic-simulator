/*
 * ProbeGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef ProbeGATE_H_
#define ProbeGATE_H_

#include "../LogicGate.h"


class ProbeGate : public LogicGate {
private:
    ProbeGate( const char* );

public:
	ProbeGate();
	virtual ~ProbeGate();
    virtual Node* clone();
    virtual bool backPropagate();

private:
    static ProbeGate instance;

private:
	virtual bool validateInputAmount();
	virtual bool validateOutputAmount();
};

#endif /* ProbeGATE_H_ */
