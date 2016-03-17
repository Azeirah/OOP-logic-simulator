/*
 * Reader.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: brian / Jorg
 */

#include "Reader.h"

Reader::Reader(string fileName) {
	infile.open (fileName.c_str());
}

Reader::~Reader() {
    infile.close();
}

string Reader::nextLine() {
	string output_string;

	    if(!infile.eof()) // To get you all the lines.
        {
	        getline(infile,output_string); // Saves the line in output_string.
	        return output_string;
        } else {
        	infile.close();
        	return string(); //empty string
        }
}

bool Reader::hasNextLine(){
    if(!infile.eof() && infile.is_open()){
        return true;
    }
    else{
        return false;
    }
}
