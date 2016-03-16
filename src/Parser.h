/*
 * Parser.h
 *
 *  Created on: Mar 1, 2016
 *      Author: Jorg
 */

#ifndef PARSER_H_
#define PARSER_H_

#include <algorithm>
#include <string>
#include <iostream>
#include "Reader.h"
 #include "NodeGraphCreator.h"
#include <map>

struct nodePair{
	string nodeName;
	string nodeType;
};

class Parser {
public:
	Parser(string filename);
	virtual ~Parser();
	void parseFileLines(void);

private:
	void parseLine(string inputLine);
	struct nodePair splitLine(string inputString);
	string removeCharsFromString(string inputString, char charToRemove);

private:
	Reader* filereader;
	NodeGraphCreator* nodeGraphCreator;
};

#endif /* PARSER_H_ */
