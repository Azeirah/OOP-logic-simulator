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
private:
    NorGate( const char* );
public:
	NorGate();
	virtual ~NorGate();
    virtual Node* clone();
private:
    static NorGate instance;
};

#endif /* NORGATE_H_ */
