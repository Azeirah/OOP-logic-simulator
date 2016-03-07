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

}

struct nodePair Parser::splitLine(string inputString) {
	struct nodePair nodeInformation;

	nodeInformation.nodeName = inputString.substring(0, inputString.find(:));
	nodeInformation.nodeType = inputString.substring(inputString.find(:), inputString.length());


	return nodeInformation;
}

void Parser::parseFileLines(void) {
	string fileLine;

	fileLine = filereader->nextLine();

	while(!fileLine.empty()) { //reader returns empty string
		parseLine(fileLine);
		fileLine = filereader->nextLine();
	}

	return;
}



