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

private:
    static ProbeGate instance;
};

#endif /* ProbeGATE_H_ */
