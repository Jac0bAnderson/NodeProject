/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: jand6944
 */

#include "CTECList.h"
#include<assert.h>
template<class Type>
CTECList<Type>::CTECList()
{
this ->size = 0;
this->Head = nullptr;
this->end = nullptr;
}
template<class Type>
CTECList<Type>::~CTECList()
{

}
template<class Type>
int CTECList<Type>:: getSize()
{

}
template<class Type>
void CTECList<Type>::addToFront(Type value)
{

}
template<class Type>
void CTECList<Type>:: addToEnd(Type value)
{

}
template<class Type>
void CTECList<Type>::addAtIndex(int index, Type value)
{

}
template<class Type>
Type CTECList<Type>::getFront()
{

}
template<class Type>
Type CTECList<Type>::getEnd()
{

}
template<class Type>
Type CTECList<Type>::getFromIndex(int index)
{

}
template<class Type>
Type CTECList<Type>::removeFromFront()
{
//Create a pointer to what is after head
	//delete what head is pointin to
	//set head to the new head
	Type returnValue;
		assert(size > 0);
		ArrayNode<Type> * newHead = new ArrayNode<Type>();
		newHead = Head->getNext();
		returnValue = Head->getValue();
		delete Head;
		this->Head  = newHead;
		this->calculatedSize();
		return returnValue;
}
template<class Type>
Type CTECList<Type>::removeFromEnd()
{
//Loop over size
	//
	Type valueToRemove;
	this->calculatedSize();




}
template<class Type>
Type CTECList<Type>::removeFromIndex(int index, Type value)
{
Type returnValue;
assert(size >0);
assert(index >= 0);
assert(index < size);
Type thingToRemove;
ArrayNode<Type> * previous, deleteMe, newNext;
if(index == 0)
{
	thingToRemove = removeFromFront();

}
else if(index == size-1)
{
	thingToRemove = removeFromEnd();
}
else
{
	for(int spot=0; spot < index + 1; spot++)
	{

	}
	this->calculatedSize();
}



return thingToRemove;

}

template<class Type>//Calculates the size of the list by iterating over all the nodes in the list.
void CTECList<Type> :: calculatedSize()
{
	assert(size >= 0);
ArrayNode<Type> * counterPointer = Head;
int count = 0;
if(counterPointer == nullptr)
{
	size = 0;
	return;//return on a void method makes it exit the method
}
else
{
	count++;
while(counterPointer->getNext()  != nullptr)
{
counterPointer = counterPointer->getNext();
count++;

}
this->size = count;
}
}
template<class Type>
Type CTECList<Type>:: set(int index, Type value)
{

}



