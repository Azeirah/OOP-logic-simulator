#include "Node.h"
#include "NodeFactory.h"
#include "Nodes/Gates/AndGate.h"
#include "Reader.h"

#include <iostream>
using namespace std;

int main () {
    Node* node = NodeFactory::get("AND");
   	cout << "I am an node and my reference is " << &node << endl;

   	Reader* mijnReader = new Reader("test.txt");
   	cout << mijnReader->nextLine() << endl;
   	cout << mijnReader->nextLine() << endl;

   //node.printInfo();
	return -1;
}
