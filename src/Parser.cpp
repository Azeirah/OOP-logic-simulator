/*
 * Parser.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: Jorg
 */

#include "Parser.h"
#include "NodeGraphCreator.h"

Parser::Parser(string filename) {
	filereader =  new Reader(filename); //create reader
}

Parser::~Parser() {
}

struct nodePair Parser::parseLine(string inputLine) {
	struct nodePair nodeInformation;

	nodeInformation = splitLine(inputLine); //split line into pair

	return nodeInformation;
}

struct nodePair Parser::splitLine(string inputString) {
	struct nodePair nodeInformation;

	//remove unwanted chars and split
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

	returnString.erase(std::remove(returnString.begin(), returnString.end(), charToRemove), returnString.end()); //remove char from string

	return returnString;
}

void Parser::parseFileLines(map<string,string> *nodes, map<string, vector<string> > *edges) {
	string fileLine;
	nodePair nodeStrings;
	pair<map<string,string>::iterator, bool> ret_value;
	bool at_nodes = true;

	while(filereader->hasNextLine()) { //check for next line
		fileLine = filereader->nextLine(); // read line
		if(validLine(fileLine)) { //check if line with info
			nodeStrings = parseLine(fileLine); //parse
			if(at_nodes){ //make difference between nodes and edges
				ret_value = nodes->insert(pair<string, string>(nodeStrings.nodeName, nodeStrings.nodeType)); //insert
				at_nodes = ret_value.second;
				if(!at_nodes){
					edges->insert(pair<string, vector<string> >(nodeStrings.nodeName, splitStringOn(',' ,nodeStrings.nodeType))); //insert
				}
			}
			else{
				edges->insert(pair<string, vector<string> >(nodeStrings.nodeName, splitStringOn(',' ,nodeStrings.nodeType))); //insert
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

	while ((pos = temp_inputString.find(splitChar)) != string::npos) { //find all split chars
		temp_token = temp_inputString.substr(0, pos);
		stringVector.push_back(temp_token); //add to vector
		temp_inputString.erase(0, pos + 1);
	}
	if(!temp_inputString.empty()){ //add last item
		stringVector.push_back(temp_inputString);
	}
	return stringVector;
}

