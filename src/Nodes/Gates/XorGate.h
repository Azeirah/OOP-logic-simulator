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
private:
    XorGate( const char* );
public:
	XorGate();
	virtual ~XorGate();
    virtual Node* clone();
private:
    static XorGate instance;
};

#endif /* XORGATE_H_ */
