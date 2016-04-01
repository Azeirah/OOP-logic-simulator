/*
 * GraphValidator.cpp
 *
 *  Created on: Mar 1, 2016
 *      Author: Jorg
 */

#include "GraphValidator.h"

GraphValidator::GraphValidator() {

}


GraphValidator::~GraphValidator() {

}

GraphValidator::validateGraph(std::map<std::string, Node*> nodeMap) {
	std::map<std::string, Node*>::iterator it;
	int ret;
	for(it = nodeMap.begin(); it != nodeMap.end(); it++ ) {
		ret = it->second->validateInputOutput;
		switch (ret) {
			case VALID: continue;
				break;
			case INPUT_ERROR: cout << "Warning: Amount of input error in Node " << it->first << endl;
				break;
			case OUTPUT_ERROR: cout << "Warning: Amount of output error in Node " << it->first << endl;
				break;
			case LOCAL_CIRCULAR_DEPENDENCY: cout << "Error: Local circular dependency in Node " << it->first << endl;
				try {
					throw LOCAL_CIRCULAR_DEPENDENCY;
				}
				catch(int e) {
					exit(e);
				}
				break;
			default: cout << "Error: Unexpected return type: " << ret << " from Node " << it->first << endl;
				break;
		}
	}
}