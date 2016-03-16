#include "Node.h"
#include "NodeFactory.h"
#include "Nodes/Gates/AndGate.h"
#include "Parser.h"

#include <iostream>
using namespace std;

int main (int argc, char* argv[]) {

	map<string,string> nodes;
	map<string, string> edges;
    Parser test("/home/jazula/Documents/circuit1.txt");
    test.parseFileLines(&nodes, &edges);

    for (map<string, string>::iterator it= nodes.begin(); it != nodes.end(); ++it){
    	cout << it->first << "   " << it->second << endl;
    }
    cout << "\n \nEDGES MOTHERFUCKER!!!!!!! \n\n";
    for (map<string, string>::iterator it= edges.begin(); it != edges.end(); ++it){
    	cout << it->first << "   " << it->second << endl;
    }

   	

	return -1;
}
