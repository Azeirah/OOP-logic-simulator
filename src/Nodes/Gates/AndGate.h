/*
 * AndGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef ANDGATE_H_
#define ANDGATE_H_

#include "../LogicGate.h"


class AndGate : public LogicGate {
private:
    AndGate( const char* );

public:
	AndGate();
	virtual ~AndGate();
    virtual Node* clone();

private:
    static AndGate instance;
};

#endif /* ANDGATE_H_ */
