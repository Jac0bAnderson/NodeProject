/*
 * Controller.h
 *
 *  Created on: Jan 27, 2016
 *      Author: jand6944
 */

#ifndef CONTROLLER_CONTROLLER_H_
#define CONTROLLER_CONTROLLER_H_
//Import section
#include <iostream>
#include <string>

#include "../Model/Node.h"
#include "../Model/ArrayNode.h"
#include "../Model/CTECArray.h"
#include "../Model/Timer.h"
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"
#include "../Model/Timer.cpp"

using namespace std;
class Controller
{
	//the private things of the controller.cpp
private:
	//Node<int> intNode;
	//ArrayNode<string>stringArrayNode;
 //  ArrayNo<string> otherArrayNode;
	//CTECArray<string> * myStringArray;
	CTECArray<int> * notHipsterInts;
	Timer arrayTimer;

	//the public things of the controller.cpp
 public:
	Controller();
	virtual ~Controller();
	void start();
};

#endif /* CONTROLLER_CONTROLLER_H_ */
