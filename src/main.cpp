#include "Node.h"
#include "NodeFactory.h"
#include "Nodes/Gates/AndGate.h"
#include "Parser.h"

#include <iostream>
using namespace std;

int main (int argc, char* argv[]) {

	map<string,string> nodes;
	map<string, string> edges;

   	if (argv[1] != NULL) {
   	Parser* testParser = new Parser(argv[1]);
   	NodeGraphCreator* nodeGraphCreator = new NodeGraphCreator();
   	testParser->parseFileLines(&nodes, &edges);
   		nodeGraphCreator->parseParserOutput(&nodes, &edges);
   		nodeGraphCreator->showStoredNodes();

   	//Reader* mijnReader = new Reader(argv[1]);
   	//cout << mijnReader->nextLine() << endl;
   	//cout << mijnReader->nextLine() << endl;
   	}
	return -1;
}
