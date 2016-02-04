/*
 * Controller.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: jand6944
 */

#include "Controller.h"
#include<string>

Controller::Controller()
{
this->	intNode.setValue(5);
this -> stringArrayNode.setValue("words are fun");
}

Controller::~Controller()
{

}

void Controller :: start()
{
	cout<< intNode.getValue()<<endl;
	cout<< stringArrayNode.getvalue()<<endl;
}
