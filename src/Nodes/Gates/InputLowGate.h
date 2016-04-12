/*
 * InputLowGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef INPUTLOWGATE_H_
#define INPUTLOWGATE_H_

#include "../../Node.h"


class InputLowGate : public Node {
private:
    InputLowGate( const char* );

public:
	InputLowGate();
	virtual ~InputLowGate();
    virtual Node* clone();

    virtual bool backPropagate();
private:
    static InputLowGate instance;

private:
	virtual bool validateInputAmount();
	virtual bool validateOutputAmount();
	virtual bool checkCircularDependency(int count, int maxCount, Node* node);
};

#endif /* INPUTLOWGATE_H_ */
