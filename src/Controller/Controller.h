/*
 * Controller.h
 *
 *  Created on: Jan 27, 2016
 *      Author: jand6944
 */

#ifndef CONTROLLER_CONTROLLER_H_
#define CONTROLLER_CONTROLLER_H_
#include <iostream>
#include <string>
#include "../Model/Node.h"
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.h"
#include "../Model/ArrayNode.cpp"

class Controller
{
private:
	Node<int> intNode;
public:
	Controller();
	virtual ~Controller();
};

#endif /* CONTROLLER_CONTROLLER_H_ */
