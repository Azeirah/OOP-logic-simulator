/*
 * Node.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef NODE_H_
#define NODE_H_

#include <string>
using namespace std;

class Node {
protected:
    Node(const string&);
public:
    Node(const Node& node);
	Node();
	virtual ~Node();
    virtual Node* clone();
};

#endif /* NODE_H_ */
