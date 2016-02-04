/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: Jacob Anderson
 */

#ifndef MODEL_NODE_H_
#define MODEL_NODE_H_
#include <iostream>
#include <string>
#include "../Model/Node.h"
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.h"
#include "../Model/ArrayNode.cpp"

template <class Type>

class Node
{
private:
	Type value;
	Node * pointers;

public:
	Node();
	Node(Type value);
	virtual ~Node();
	Type getValue();
    void setValue(Type value);
	ArrayNode * getNext();
	Node * getPointers();
};

#endif /* MODEL_NODE_H_ */

