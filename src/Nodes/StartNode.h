/*
 * StartNode.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef STARTNODE_H_
#define STARTNODE_H_

#include "../Node.h"

class StartNode: public Node {
public:
	StartNode();
	virtual ~StartNode();
    virtual Node* clone();
private:
	virtual bool validateInputAmount();
	virtual bool validateOutputAmount();
};

#endif /* STARTNODE_H_ */
