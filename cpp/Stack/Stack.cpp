/*
 * Stack.cpp
 *
 *  Created on: 19 Oct. 2018
 *      Author: ranjeet
 */

#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack(): size(0) {
	stack_vector.resize(MAX_SIZE);
}

Stack::~Stack() {
	// TODO Auto-generated destructor stub
}

void Stack::push(int data) {
	if( size <=MAX_SIZE){
		stack_vector[size] = data;
		size++;
	}else{
		cout << "Stack is Full! \n";
	}
}

// removes and returns the last inserted element from the stack
int Stack::pop() {

	int data = stack_vector[size];
	// remove last element
	size--;

	  return data;
}

// returns the last inserted element without removing it
int Stack::top() {

	return stack_vector[size];
}

int Stack::getSize() {

	return size;
}

bool Stack::isEmpty() {
	return size;
}

void Stack::print() {
    for (int i = 0; i < size; ++i) {
		cout << stack_vector[i] << " ";
	}
    cout << "\n";
}
