/*
 * Reader.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#include "Reader.h"

Reader::Reader(string fileName) {
	infile.open (fileName.c_str());
}

Reader::~Reader() {
        	infile.close();
}

string Reader::nextLine() {
	string STRING;

	    if(!infile.eof()) // To get you all the lines.
        {
	        getline(infile,STRING); // Saves the line in STRING.
	        return STRING;
        } else {
        	infile.close();
        	return NULL;
        }
}
