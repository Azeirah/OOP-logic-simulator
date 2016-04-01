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
#define CIRCULAR_DEPENDENCY 		4

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
    virtual bool backPropagate();
    int validateInputOutput(int maximumNodes);

    vector<Node*> inputs;
	vector<Node*> outputs;

private:
	virtual bool validateInputAmount();
	virtual bool validateOutputAmount();
	virtual bool checkCircularDependency(int count, int maxCount, Node* node);
};

#endif /* NODE_H_ */
