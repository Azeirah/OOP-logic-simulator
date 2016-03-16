/*
 * LogicGate.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef LOGICGATE_H_
#define LOGICGATE_H_

#include "../Node.h"

class LogicGate : public Node {
protected:
    LogicGate(const char*);
public:
	LogicGate();
	virtual ~LogicGate();
    virtual Node* clone();
};

#endif /* LOGICGATE_H_ */
