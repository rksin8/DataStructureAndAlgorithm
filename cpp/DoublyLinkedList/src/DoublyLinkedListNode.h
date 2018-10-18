/*
 * DoublyLinkedListNode.h
 *
 *  Created on: 18 Oct. 2018
 *      Author: ranjeet
 */

#ifndef DOUBLYLINKEDLISTNODE_H_
#define DOUBLYLINKEDLISTNODE_H_

class DoublyLinkedListNode {
public:
	DoublyLinkedListNode(int node_data);
	//virtual ~DoublyLinkedListNode();

public:
	int data;
	DoublyLinkedListNode* next;
	DoublyLinkedListNode* prev;
};

#endif /* DOUBLYLINKEDLISTNODE_H_ */
