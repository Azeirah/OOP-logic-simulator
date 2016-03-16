#include "Node.h"
#include "NodeFactory.h"
#include "Nodes/Gates/AndGate.h"
#include "Parser.h"

#include <iostream>
using namespace std;

int main (int argc, char* argv[]) {

	map<string,string> nodes;
	map<string, vector<string> > edges;
    Parser test("/home/jazula/Documents/circuit1.txt");
    test.parseFileLines(&nodes, &edges);

    for (map<string, string>::iterator it= nodes.begin(); it != nodes.end(); ++it){
    	cout << it->first << "   " << it->second << endl;
    }
    cout << "\n \nEDGES MOTHERFUCKER!!!!!!! \n\n";
    for (map<string, vector<string> >::iterator iter= edges.begin(); iter != edges.end(); ++iter){
    	cout << iter->first << "   " << endl << "\t"; 
    	for (int i = 0 ; i < iter->second.size() ; i++) {
    		cout << iter->second[i] << "\t";
    	}
    	cout << endl;
    }   	

	return -1;
}
