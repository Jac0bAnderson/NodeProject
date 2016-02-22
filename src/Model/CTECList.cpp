/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: jand6944
 */

#include "CTECList.h"
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
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
}
template<class Type>
Type CTECList<Type>::removeFromEnd()
{

}
template<class Type>
Type CTECList<Type>::removeFromIndex(int index, Type value)
{

}
template<class Type>
Type CTECList<Type>:: set(index, Type value)
{

}



