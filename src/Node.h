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

#define VALID 						0
#define INPUT_ERROR 				1
#define OUTPUT_ERROR 				2
#define LOCAL_CIRCULAR_DEPENDENCY 	3

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
    int validateInputOutput();

private:
	bool validateInputAmount();
	bool validateOutputAmount();
	vector<Node*> inputs;
	vector<Node*> outputs;
};

#endif /* NODE_H_ */
