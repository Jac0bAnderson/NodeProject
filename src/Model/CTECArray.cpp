/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: jand6944
 */

#include "CTECArray.h"
#include <iostream>
using namespace std;
template <class Type>
CTECArray<Type>::CTECArray(int size)
{
this->size = size;
head = nullptr;
if(size <= 0)
{
	cerr << "it must be a prank because thats not possible"<<endl;
	return;
}
for(int index = 0; index < size; index++)
{
	if(head != nullptr)
	{//we have more than one ArrayNode
		ArrayNode<Type> nextNode;
		nextNode.setNext(head);
		head = &nextNode;
	}
	else
	{//the first node in the array
		ArrayNode <Type> first;
		head = &first;
	}
}
}
template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * eraseMe = head;
for(int index = 0; index < size; index++)
{
if(eraseMe -> getNext() != nullptr)
{
	head = eraseMe -> getNext();
	eraseMe -> setNext(nullptr);
	delete eraseMe->getNext();
	eraseMe = head;

}
else
{
	delete eraseMe->getNext();
	eraseMe = head;
}
delete head;
}
}




template <class Type>
int CTECArray<Type>:: getSize()
{
	return this->size;
}
template <class Type>
Type* CTECArray<Type>:: get(int position)
{
	//Bounds check for size and negative.
	if(position > size || position > 0)
	{
		return nullptr;
	}
	else
	{
		//Inclusive because I am inside the bounds
		for(int spot = 0; spot < position; spot++)
		{
		ArrayNode * current = head;
		if(spot != position)
		{
			current = current->getNext();
		}
		else
		{
			return current->getValue();
		}
		}
	}
}
template <class Type>
void CTECArray<Type>:: set(int position, Type value)
{
	if(position >= size || position < 0)
	{
		cerr << "dont do this" << endl;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if (spot != position)
			{
				current =current -> getNext();
			}
			else
			{
				current -> setValue(value);
			}
		}
	}

}
