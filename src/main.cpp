#include "Node.h"
#include "NodeFactory.h"
#include "Nodes/Gates/AndGate.h"

#include <iostream>
using namespace std;

int main () {
    Node* node = NodeFactory::get("AND");
   	cout << "I am an node and my reference is " << &node << endl;
   //node.printInfo();
	return -1;
}
