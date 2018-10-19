/*
 * DoublyLinkedList.cpp
 *
 *  Created on: 18 Oct. 2018
 *      Author: ranjeet
 */

#include <iostream>

#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList() {
	this->head = nullptr;
	this->tail = nullptr;
}

DoublyLinkedList::~DoublyLinkedList() {

	while(head){
		DoublyLinkedListNode* tmp = head;
		head = head->next;
		delete tmp;
	}
}

void DoublyLinkedList::insertNode(int nodeData) {
	DoublyLinkedListNode* node = new DoublyLinkedListNode(nodeData);

	if(!this->head){
		this->head = node;
	}else{
		this->tail->next = node;
		node->prev = this->tail;
	}

	this->tail = node;
}

void DoublyLinkedList::sortedInsert(int data) {
	DoublyLinkedListNode* curr = head;

	DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);

	if(!curr){
		this->head = newNode;
	}else if(data <= curr->data){ // insert at first Node
		newNode->next = curr;
		curr->prev = newNode;
		head = newNode;

	} else if (data >= this->tail->data){ // insert at last node
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;

	}
	else{ // insert in between nodes

		while( curr != nullptr && curr->data <=data){
			curr = curr->next;
		}

		//std::cout << "stopped at " << curr->data << std::endl;

	    // insert in between
		if(curr->next != nullptr){
			curr->prev->next = newNode;
			newNode->prev = curr->prev;
			newNode->next = curr;
			curr->prev = newNode;
		}
	}
}

void DoublyLinkedList::print(DoublyLinkedListNode* head1) {
	   DoublyLinkedListNode* tmp = head1;
		while(tmp){
			std::cout << tmp->data << std::endl;
			tmp = tmp->next;
		}
}

void DoublyLinkedList::print() {
	   DoublyLinkedListNode* tmp = head;
		while(tmp){
			std::cout << tmp->data << std::endl;
			tmp = tmp->next;
		}
}

DoublyLinkedListNode* DoublyLinkedList::reverseList() {

	DoublyLinkedListNode* curr = head;
	DoublyLinkedListNode* tmp = nullptr;
	while(curr != nullptr){
		tmp = curr->prev;
		curr->prev = curr->next;
		curr->next = tmp;
		curr = curr->prev;
	}

	return tmp->prev;

}
