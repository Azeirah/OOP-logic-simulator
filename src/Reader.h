/*
 * Reader.h
 *
 *  Created on: Mar 1, 2016
 *      Author: brian
 */

#ifndef READER_H_
#define READER_H_

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

class Reader {
public:
	Reader(string fileName);
	virtual ~Reader();
	string nextLine();
		ifstream infile;
};

#endif /* READER_H_ */
