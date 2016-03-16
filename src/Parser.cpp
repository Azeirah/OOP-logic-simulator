/*
 * Parser.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: Jorg
 */

#include "Parser.h"

Parser::Parser(string filename) {
	filereader =  new Reader(filename);
}

Parser::~Parser() {
}

void Parser::parseLine(string inputLine) {
	struct nodePair nodeInformation;

	nodeInformation = splitLine(inputLine);

	cout << nodeInformation.nodeName << endl;
	cout << nodeInformation.nodeType << endl;
}

struct nodePair Parser::splitLine(string inputString) {
	struct nodePair nodeInformation;

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

void Parser::parseFileLines(void) {
	string fileLine;

	fileLine = filereader->nextLine();

	while(!fileLine.empty()) { //reader returns empty string when done
		if(fileLine.at(0) != '#') //ignore comments
			parseLine(fileLine);
		fileLine = filereader->nextLine();
	}

	return;
}



