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
	ArrayNode<Type> * deleteMe = Head;
		for (int index = 0; index < size; index++)
		{
			if (deleteMe->getNext() != nullptr)
			{
				Head = deleteMe->getNext();
				deleteMe->setNext(nullptr);
			} else
			{
				delete deleteMe->getNext();
				deleteMe = Head;
			}
		}
		delete Head;
}
template<class Type>
int CTECList<Type>:: getSize()
{
	return this->size;

}
template<class Type>
void CTECList<Type>::addToFront(Type value)
{
	//check size >0
		//make node point to head
		//have head point to the new node
	ArrayNode<Type> *first, *newNode, *last, *newItem, *count;
	assert(size >0);
	ArrayNode<Type> *current;
	ArrayNode<Type> *trailCurrent;
	ArrayNode<Type> *newNode;
	bool found;
	newNode = new ArrayNode<Type>;
	newNode->info = newItem;
	newNode->link = nullptr;
	if(first== nullptr)
	{
		first = newNode;
		last = newNode;
		count++;
	}
	else
	{
		current = first;
		found = false;
		while(current != nullptr && !found)
		{
			if(current->info >= newItem)
			{
			found = true;
			}
			else
			{
				trailCurrent = current;
				current = current->links;
			}
			if (current == first)
			{
				newNode->link = first;
				first = newNode;
				count++;
			}

		}
	}
}
template<class Type>
void CTECList<Type>:: addToEnd(Type value)
{
	ArrayNode<Type> *first, *newNode, *last, *newItem, *count;
		assert(size >0);
		ArrayNode<Type> *current;
		ArrayNode<Type> *trailCurrent;
		ArrayNode<Type> *newNode;
		bool found;
		newNode = new ArrayNode<Type>;
		newNode->info = newItem;
		newNode->link = nullptr;
		if(first== nullptr)
		{
			first = newNode;
			last = newNode;
			count++;
		}
		else
		{
			current = first;
			found = false;
			while(current != nullptr && !found)
			{
				if(current->info >= newItem)
				{
				found = true;
				}
				else
				{
					trailCurrent = current;
					current = current->links;
				}
				if (current == first)
				{
					newNode->link = first;
					first = newNode;
					count++;
				}

			}
		}
}
template<class Type>
void CTECList<Type>::addAtIndex(int index, Type value)
{
	//check (using assert) if index >= 0 and index <=size
	//loop "for(int spot = 0; spot <index; spot++)"
	//make node set previous next to new next
	//call calculatedSize()



}
template<class Type>
Type CTECList<Type>::getFront()
{
assert(Head != nullptr);
return Head;
}
template<class Type>
Type CTECList<Type>::getEnd()
{
assert(end != nullptr);
return end;

}
template<class Type>
Type CTECList<Type>::getFromIndex(int index)
{
//make sure index is not <0 and >= size
//if index == 0 or size-1 call methods for f/e
//make a reference to head
//loop to index
//update  pointer to head
//return .getValue();
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
	//or loop until getNext()->getNext()== nullptr
	//get the value from the last node
	//set the next to lst node to point to nullptr
	//set the next to lst node as end
	//delete the old last node
	//before returb the variable call calculatedSize()
	//return value
	assert(size >0);
	Type valueToRemove;
	if(size == 1)
	{
	valueToRemove = removeFromFront();
	end = nullptr;
	calculatedSize();
	return valueToRemove;
	}
	else
	{


	ArrayNode<Type> * current = Head;
	for(int spot = 0; spot < size -1; spot ++)
	{
		current = current->getNext();
	}
	ArrayNode<Type> * pointer = Head;

	valueToRemove = current->getNext()->getValue();
	end = current;
	delete current->getNext();
	this->calculatedSize();
	return valueToRemove();
	}



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



