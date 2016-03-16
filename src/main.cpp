#include "Node.h"
#include "NodeFactory.h"
#include "Nodes/Gates/AndGate.h"

#include <iostream>
using namespace std;

int main () {
    Node* node = NodeFactory::get("AND");

	return -1;
}
