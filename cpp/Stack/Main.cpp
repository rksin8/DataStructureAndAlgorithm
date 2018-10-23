/*
 * Main.cpp
 *
 *  Created on: 19 Oct. 2018
 *      Author: ranjeet
 */

#include <iostream>

#include "Stack.h"

using namespace std;

int main(int argc, char **argv) {

	Stack* stack = new Stack();

	stack->push(1);
	stack->push(2);
	stack->push(3);
	stack->push(5);
	stack->push(6);

	stack->print();

	stack->pop();
	stack->pop();
	stack->pop();
	stack->pop();
	stack->pop();
	stack->pop();

	stack->print();

	if(stack->isEmpty()){
		cout << "Stack is empty!";
	}else{
		cout << "Stack is not empty!";
	}


}



