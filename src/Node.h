/*
 * Node.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef NODE_H_
#define NODE_H_

class Visitor;

class Node {
public:
	Node();
	virtual ~Node();
    virtual void accept(Visitor& v) = 0;
};

#endif /* NODE_H_ */
