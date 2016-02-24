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
this->head = nullptr;
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
//Create a pointer to waht is after head
	//delete what head is pointin to
	//set head to the new head
	Type returnValue;
		assert(size > 0);
		ArrayNode<Type> * newHead = new ArrayNode<Type>();
		newHead = head->getNext();
		returnValue = head->getValue();
		delete head;
		this->head  = newHead;
		return returnValue;
}
template<class Type>
Type CTECList<Type>::removeFromEnd()
{
//loop over size
	//or
	//Loop until getNext()->getNext() == nullptr


}
template<class Type>
Type CTECList<Type>::removeFromIndex(int index, Type value)
{
Type returnValue;
assert(size >0);
assert(index >= 0);
assert(index < size);




}
template<class Type>
Type CTECList<Type>:: set(index, Type value)
{

}



