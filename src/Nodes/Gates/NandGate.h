/*
 * NandGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef NANDGATE_H_
#define NANDGATE_H_

#include "../../Node.h"

class NandGate: public Node {
private:
    NandGate( const char* );
public:
	NandGate();
	virtual ~NandGate();
    virtual Node* clone();
    virtual bool backPropagate();
private:
    static NandGate instance;
};

#endif /* NANDGATE_H_ */
