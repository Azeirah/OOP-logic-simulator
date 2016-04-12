/*
 * NorGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef NORGATE_H_
#define NORGATE_H_

#include "../../Node.h"

class NorGate: public Node {
private:
    NorGate( const char* );
public:
	NorGate();
	virtual ~NorGate();
    virtual Node* clone();
    virtual bool backPropagate();
private:
    static NorGate instance;
};

#endif /* NORGATE_H_ */
