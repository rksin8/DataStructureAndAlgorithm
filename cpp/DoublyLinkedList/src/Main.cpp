//============================================================================
// Name        : DoublyLinkedList.cpp
// Author      : Ranjeet Kumar Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "DoublyLinkedListNode.h"
#include "DoublyLinkedList.h"

int main() {


	DoublyLinkedList* myList = new DoublyLinkedList();

    myList->insertNode(4);
    myList->insertNode(6);
    myList->insertNode(7);
    myList->print(); // @suppress("Ambiguous problem")

    /*
    myList->sortedInsert(3);
    myList->sortedInsert(3);
    myList->sortedInsert(7);
    myList->sortedInsert(8);
    myList->sortedInsert(8);
    myList->print();
	*/

    cout << "Printing list in reverse order..\n";

    DoublyLinkedListNode* reverseHead = myList->reverseList();
    myList->print(reverseHead);

    delete myList;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
