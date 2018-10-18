/*
 * Node.h
 *
 *  Created on: 5 Oct. 2018
 *      Author: ranjeet
 */

#ifndef NODE_H_
#define NODE_H_

class Node {
public:
	Node(int data_=0);

	friend class SinglyLinkedList;

public:
	int data;
	Node* next;
};

#endif /* NODE_H_ */
