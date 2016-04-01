/*
 * Circuit.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef CIRCUIT_H_
#define CIRCUIT_H_

#include "../Node.h"

class Circuit: public Node {
public:
	Circuit();
	virtual ~Circuit();
    virtual Node* clone();
};

#endif /* CIRCUIT_H_ */
