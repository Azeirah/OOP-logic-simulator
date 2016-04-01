#include "Node.h"
#include "NodeFactory.h"
#include "Nodes/Gates/AndGate.h"
#include "Reader.h"
#include "Parser.h"
#include "GraphValidator.h"
#include <iostream>
using namespace std;

int main (int argc, char* argv[]) {

	map<string,string> nodes;
	map<string, vector<string> > edges;

    if (argv[1] != NULL) {
        Parser* testParser = new Parser(argv[1]);
        NodeGraphCreator* nodeGraphCreator = new NodeGraphCreator();
        GraphValidator* validator = new GraphValidator();
        testParser->parseFileLines(&nodes, &edges);
        std::map<std::string, Node*> nodeMap = nodeGraphCreator->parseParserOutput(&nodes, &edges);
        validator->validateGraph(nodeMap);
        // nodeGraphCreator->showStoredNodes();
        std::map<std::string, Node*> endNodeMap = nodeGraphCreator->getEndNodes();

        for (auto const &pair : endNodeMap) {
            cout << pair.first << " reads " << pair.second->backPropagate() << endl;
        }
	} else {
        cout << "You forgot to pass a circuit file" << endl;
        cout << "Usage: oop.bin circuit.txt" << endl;
    }

	return -1;
}
