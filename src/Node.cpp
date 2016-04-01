/*
 * Node.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "NodeFactory.h"
#include "Node.h"
#include <iostream>
using namespace std;

Node::Node(const string& gateName) {
    NodeFactory::assign(gateName, this);
}

Node::Node() {
	// TODO Auto-generated constructor stub

}

Node::~Node() {
	// TODO Auto-generated destructor stub
}

Node* Node::clone() {
    return new Node();
}
