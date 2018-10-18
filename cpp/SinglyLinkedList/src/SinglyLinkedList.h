/*
 * SinglyLinkedList.h
 *
 *  Created on: 5 Oct. 2018
 *      Author: ranjeet
 */

#ifndef SINGLYLINKEDLIST_H_
#define SINGLYLINKEDLIST_H_
#include <iostream>
#include "Node.h"


class SinglyLinkedList {
public:
	SinglyLinkedList();

	void addNode(int data);
	void deleteNode(int data);
	void printList();
	void printReverse();
	void deleteAll();

	void sort();


public:
Node* head;
	void printReverseWorker(Node* curr);
};

#endif /* SINGLYLINKEDLIST_H_ */
