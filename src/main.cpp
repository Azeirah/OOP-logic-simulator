#include "Node.h"
#include "NodeFactory.h"
#include "Nodes/Gates/AndGate.h"
#include "Reader.h"

#include <iostream>
using namespace std;

int main (int argc, char* argv[]) {

    Node* node = NodeFactory::get("AND");
   	cout << "I am an node and my reference is " << &node << endl;

   	if (argv[1] != NULL) {

   	Reader* mijnReader = new Reader(argv[1]);
   	cout << mijnReader->nextLine() << endl;
   	cout << mijnReader->nextLine() << endl;

}
   //node.printInfo();
	return -1;
}
