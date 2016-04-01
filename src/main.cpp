#include "Node.h"
#include "NodeFactory.h"
#include "Nodes/Gates/AndGate.h"
#include "Reader.h"

#include <iostream>
using namespace std;

int main () {
    Node* node1;
    Node* node2;
    Node* node3;
    Node* node4;

    NodeFactory::get("AND", node1);
    NodeFactory::get("NOT", node2);
    NodeFactory::get("NOT", node3);
    NodeFactory::get("NOT", node4);

    cout << "node 1 is " << node1 << endl;
    cout << "node 2 is " << node2 << endl;
    cout << "node 3 is " << node3 << endl;
    cout << "node 4 is " << node4 << endl;

	return -1;
}
