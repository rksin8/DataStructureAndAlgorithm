//============================================================================
// Name        : LinkedListTest.cpp
// Author      : Ranjeet Kumar Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "SinglyLinkedList.h"

int main() {

	SinglyLinkedList* mylist = new SinglyLinkedList;

	mylist->addNode(5);
	mylist->addNode(7);
	mylist->addNode(9);
	mylist->addNode(11);
	mylist->printList();

	cout << "Printing List in reverse order...\n";
	mylist->printReverse();









	/*
	Node* nodeA = new Node(5);
	Node* nodeB = new Node(7);
	Node* nodeC = new Node(9);
	Node* nodeD = new Node(11);

	nodeA->next = nodeB;
	nodeB->next = nodeC;
	nodeC->next = nodeD;

	Node* curr = nodeA;

	while(curr != nullptr){
		cout << curr->data << endl;
		curr = curr->next;
	}



	delete nodeA;
	delete nodeB;
	delete nodeC;
	delete nodeD;
	*/

	return 0;
}
