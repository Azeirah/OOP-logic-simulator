/*
 * Parser.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: Jorg
 */

#include "Parser.h"
#include "NodeGraphCreator.h"

Parser::Parser(string filename) {
	filereader =  new Reader(filename);
	nodeGraphCreator = new NodeGraphCreator();
}

Parser::~Parser() {
}

struct nodePair Parser::parseLine(string inputLine) {
	struct nodePair nodeInformation;

	nodeInformation = splitLine(inputLine);

	// cout << nodeInformation.nodeName << endl;
	// cout << nodeInformation.nodeType << endl;

	return nodeInformation;
}

struct nodePair Parser::splitLine(string inputString) {
	struct nodePair nodeInformation;
	//set chars in array and check in loop
	nodeInformation.nodeName = inputString.substr(0, inputString.find(':'));
	nodeInformation.nodeName = removeCharsFromString(nodeInformation.nodeName, ' ');
	nodeInformation.nodeName = removeCharsFromString(nodeInformation.nodeName, ':');
	nodeInformation.nodeName = removeCharsFromString(nodeInformation.nodeName, ';');

	nodeInformation.nodeType = inputString.substr(inputString.find(':'), inputString.length());
	nodeInformation.nodeType = removeCharsFromString(nodeInformation.nodeType, ' ');
	nodeInformation.nodeType = removeCharsFromString(nodeInformation.nodeType, ':');
	nodeInformation.nodeType = removeCharsFromString(nodeInformation.nodeType, ';');
	nodeInformation.nodeType = removeCharsFromString(nodeInformation.nodeType, '\t');

	return nodeInformation;
}

string Parser::removeCharsFromString(string inputString, char charToRemove) {
	string returnString = inputString;

	returnString.erase(std::remove(returnString.begin(), returnString.end(), charToRemove), returnString.end());

	return returnString;
}

void Parser::parseFileLines(map<string,string> *nodes, map<string, string> *edges) {
	string fileLine;
	nodePair nodeStrings;
	pair<map<string,string>::iterator,bool> ret_value;
	bool at_nodes = true;

	fileLine = filereader->nextLine();

	while(!fileLine.empty()) { //reader returns empty string when done
		
		if(validLine(fileLine)) {
			nodeStrings = parseLine(fileLine);
			if(at_nodes){
				ret_value = nodes->insert(pair<string, string>(nodeStrings.nodeName, nodeStrings.nodeType));
				at_nodes = ret_value.second;
				if(!at_nodes)
					edges->insert(pair<string, string>(nodeStrings.nodeName, nodeStrings.nodeType));
			}
			else{
				edges->insert(pair<string, string>(nodeStrings.nodeName, nodeStrings.nodeType));
			}
		}
		fileLine = filereader->nextLine();

	}
	//DEBUG voor Brian <3
	nodeGraphCreator->showStoredNodes();

	return;
}

bool Parser::validLine(string fileLine) {
	if(fileLine.at(0) != '\r' && fileLine.at(0) != '\n' && !fileLine.empty() && fileLine.at(0) != '#') //ignore comments
		return true;
	else
		return false;
}



