/*
 * GraphValidator.h
 *
 *  Created on: Mar 1, 2016
 *      Author: Jorg
 */

#ifndef GRAPHVALIDATOR_H_
#define GRAPHVALIDATOR_H_

#include <string>
#include <iostream>
#include <map>
#include <vector>



class GraphValidator {
public:
	GraphValidator();
	virtual ~GraphValidator();
	void validateGraph(std::map<std::string, Node*> nodeMap);
};

#endif /* GRAPHVALIDATOR_H_ */
