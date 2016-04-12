/*
 * OrGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef ORGATE_H_
#define ORGATE_H_

#include "../../Node.h"

class OrGate: public Node {
private:
    OrGate( const char* );

public:
	OrGate();
	virtual ~OrGate();
    virtual Node* clone();
    virtual bool backPropagate();
private:
    static OrGate instance;
};

#endif /* ORGATE_H_ */
