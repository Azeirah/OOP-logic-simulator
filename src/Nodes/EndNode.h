/*
 * EndNode.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef ENDNODE_H_
#define ENDNODE_H_

#include "../Node.h"

class EndNode: public Node {
public:
	EndNode();
	virtual ~EndNode();
    virtual Node* clone();
};

#endif /* ENDNODE_H_ */
