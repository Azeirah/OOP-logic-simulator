/*
 * InputHighGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef INPUTHIGHGATE_H_
#define INPUTHIGHGATE_H_

#include "../LogicGate.h"


class InputHighGate : public LogicGate {
private:
    InputHighGate( const char* );

public:
	InputHighGate();
	virtual ~InputHighGate();
    virtual Node* clone();
    virtual bool backPropagate();
    
private:
    static InputHighGate instance;

private:
	virtual bool validateInputAmount();
	virtual bool validateOutputAmount();
	virtual bool checkCircularDependency(int count, int maxCount, Node* node);
};

#endif /* INPUTHIGHGATE_H_ */
