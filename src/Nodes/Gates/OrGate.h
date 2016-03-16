/*
 * OrGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef ORGATE_H_
#define ORGATE_H_

#include "../LogicGate.h"

class OrGate: public LogicGate {
private:
    OrGate( const char* );

public:
	OrGate();
	virtual ~OrGate();
    virtual Node* clone();

private:
    static OrGate instance;
};

#endif /* ORGATE_H_ */
