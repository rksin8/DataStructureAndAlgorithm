/*
 * DoublyLinkedListNode.cpp
 *
 *  Created on: 18 Oct. 2018
 *      Author: ranjeet
 */

#include "DoublyLinkedListNode.h"


DoublyLinkedListNode::DoublyLinkedListNode(int node_data) {
	this->data = node_data;
	this->next = nullptr;
	this->prev = nullptr;
}
