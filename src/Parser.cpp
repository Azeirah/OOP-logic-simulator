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
}

Parser::~Parser() {
}

struct nodePair Parser::parseLine(string inputLine) {
	struct nodePair nodeInformation;

	nodeInformation = splitLine(inputLine);

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
	nodeInformation.nodeType = removeCharsFromString(nodeInformation.nodeType, '\r');

	return nodeInformation;
}

string Parser::removeCharsFromString(string inputString, char charToRemove) {
	string returnString = inputString;

	returnString.erase(std::remove(returnString.begin(), returnString.end(), charToRemove), returnString.end());

	return returnString;
}

void Parser::parseFileLines(map<string,string> *nodes, map<string, vector<string> > *edges) {
	string fileLine;
	nodePair nodeStrings;
	pair<map<string,string>::iterator, bool> ret_value;
	bool at_nodes = true;

	while(filereader->hasNextLine()) { //!fileLine.empty()) { //reader returns empty string when done
		fileLine = filereader->nextLine();
		if(validLine(fileLine)) {
			nodeStrings = parseLine(fileLine);
			if(at_nodes){
				ret_value = nodes->insert(pair<string, string>(nodeStrings.nodeName, nodeStrings.nodeType));
				at_nodes = ret_value.second;
				if(!at_nodes){
					edges->insert(pair<string, vector<string> >(nodeStrings.nodeName, splitStringOn(',' ,nodeStrings.nodeType)));
				}
			}
			else{
				edges->insert(pair<string, vector<string> >(nodeStrings.nodeName, splitStringOn(',' ,nodeStrings.nodeType)));
			}
		}
	}

	return;
}

bool Parser::validLine(string fileLine) {
    return !fileLine.empty() && fileLine.at(0) != '\r' && fileLine.at(0) != '\n' && fileLine.at(0) != '#';
	// if() //ignore comments
	// 	return true;
	// else
	// 	return false;
}

vector<string> Parser::splitStringOn(char splitChar, string inputString){
	size_t pos = 0;
	string temp_inputString = inputString;
	string temp_token;
	vector<string> stringVector;

	while ((pos = temp_inputString.find(splitChar)) != string::npos) {
		temp_token = temp_inputString.substr(0, pos);
		stringVector.push_back(temp_token);
		temp_inputString.erase(0, pos + 1);
	}
	if(!temp_inputString.empty()){
		stringVector.push_back(temp_inputString);
	}
	return stringVector;
}

