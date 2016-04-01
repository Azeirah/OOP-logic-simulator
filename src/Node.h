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
#include <vector>

class Node {
protected:
    Node(const string&);
public:
    Node(const Node& node);
	Node();
	virtual ~Node();
    virtual Node* clone();
    void addInput(Node*);
    void addOutput(Node*);
private:
	vector<Node*> inputs;
	vector<Node*> outputs;
};

#endif /* NODE_H_ */
