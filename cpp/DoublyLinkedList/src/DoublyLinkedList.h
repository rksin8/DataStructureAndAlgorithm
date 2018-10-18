/*
 * DoublyLinkedList.h
 *
 *  Created on: 18 Oct. 2018
 *      Author: ranjeet
 */

#ifndef DOUBLYLINKEDLIST_H_
#define DOUBLYLINKEDLIST_H_

#include "DoublyLinkedListNode.h"

class DoublyLinkedList {
public:
	DoublyLinkedListNode *head;
	DoublyLinkedListNode *tail;


	DoublyLinkedList();

	~DoublyLinkedList();

	void insertNode(int nodeData);
	void print();

	void sortedInsert(int data);


};

#endif /* DOUBLYLINKEDLIST_H_ */
