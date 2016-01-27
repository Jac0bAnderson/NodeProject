/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: Jacob Anderson
 */

#ifndef MODEL_NODE_H_
#define MODEL_NODE_H_
template <class Type>

class Node
{
public:
	Node();
	virtual ~Node();
private:
	Type value;//container for the value stored in the node.
	Node * pointers;// Pointer to the array of Nodes that are linked to this node.
	Type getValue();
	Node * getPointers();
};

#endif /* MODEL_NODE_H_ */
