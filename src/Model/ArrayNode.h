/*
 * ArrayNode.h
 *
 *  Created on: Jan 29, 2016
 *      Author: jand6944
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_
//imports
#include "Node.h"

template <class Type>
class ArrayNode: public Node<Type>
{
	//the private of the ArrayNode.cpp
private:

	ArrayNode * next;

	//the public of the ArrayNode.cpp
public:
	ArrayNode();
	ArrayNode(const Type& value);
	ArrayNode(const Type& value, ArrayNode<Type> * next);
	virtual ~ArrayNode();
	ArrayNode * getNext();
	void setNext(ArrayNode<Type> * next);

};

#endif /* MODEL_CTECARRAY_H_ */
