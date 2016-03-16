#include "Node.h"
#include "NodeFactory.h"
#include "Nodes/Gates/AndGate.h"
#include "Parser.h"

#include <iostream>
using namespace std;

int main (int argc, char* argv[]) {

    Parser test("/home/jazula/Documents/circuit1.txt");
    test.parseFileLines();

   	

	return -1;
}
