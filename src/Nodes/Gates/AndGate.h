/*
 * AndGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef ANDGATE_H_
#define ANDGATE_H_

#include "../../Node.h"


class AndGate : public Node {
private:
    AndGate( const char* );

public:
	AndGate();
	virtual ~AndGate();
    virtual Node* clone();

    virtual bool backPropagate();
private:
    static AndGate instance;
};

#endif /* ANDGATE_H_ */
