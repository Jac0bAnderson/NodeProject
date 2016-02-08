/*
 * ArrayNode.h
 *
 *  Created on: Jan 29, 2016
 *      Author: jand6944
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_
//imports
#include "ArrayNode.h"

template <class Type>
class CTECArray
{
	//the private of the ArrayNode.cpp
private:
	int size;
	ArrayNode * head;

	//the public of the ArrayNode.cpp
public:
	CTECArray(int size);
	virtual ~CTECArray();
	int getSize();
	Type* get(int position);
	void set(int position, Type value);
};

#endif /* MODEL_CTECARRAY_H_ */
