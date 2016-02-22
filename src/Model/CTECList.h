/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: jand6944
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_
#include "ArrayNode.h"
template <class Type>
class CTECList
{
private:
int size;
ArrayNode<Type> *Head;
ArrayNode<Type> *end;
public:
CTECList();
~CTECList();
int getSize();
void  addToFront(Type value);
void addToEnd(Type value);
void addAtIndex(int index, Type value);
Type getFront();
Type getEnd();
Type getFromIndex(int index);
Type removeFromFront();
Type removeFromEnd();
Type removeFromIndex(int index, Type value);
Type set(index, Type value);
};



#endif /* MODEL_CTECLIST_H_ */
