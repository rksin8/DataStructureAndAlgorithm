/*
 * SinglyLinkedList.cpp
 *
 *  Created on: 5 Oct. 2018
 *      Author: ranjeet
 */

#include "SinglyLinkedList.h"

SinglyLinkedList::SinglyLinkedList(): head(nullptr) {
}

void SinglyLinkedList::addNode(int data) {

	if (head == nullptr){
		head = new Node(data);
		std::cout << data << " added to the list !\n";
	}else{
		// Case 1. Add node at the end

		Node* curr = head;
		while(curr->next != nullptr){
			curr = curr->next;
		}
		// Now we reached at the position
		Node* newNode = new Node(data);
		curr->next = newNode;
		std::cout << data << " added to the list !\n";

		// Case 2. Add node between
		// find the position based on the given condition

	}
}

void SinglyLinkedList::printList() {
	Node* curr = head;
	while(curr != nullptr){
		std::cout << curr->data << std::endl;
		curr = curr->next;
	}
}

void SinglyLinkedList::deleteNode(int data) {
}

void SinglyLinkedList::printReverse() {
	Node* curr = head;
	printReverseWorker(curr);
}

void SinglyLinkedList::deleteAll() {
}

void SinglyLinkedList::printReverseWorker(Node* curr) {
	if (curr != nullptr){
		printReverseWorker(curr->next);
		std::cout << curr->data << std::endl;
	}

}
