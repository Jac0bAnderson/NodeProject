/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: Jacob Anderson
 */

#ifndef MODEL_NODE_H_
#define MODEL_NODE_H_
//import section
#include <iostream>


template <class Type>
class Node
{
private:
	Type value;
	Node * pointers;

public:
	Node();
	Node(const Type& value);
	virtual ~Node();
	Type getValue();
    void setValue( const Type& value );
    Node * getPointers();
};

#endif /* MODEL_NODE_H_ */

