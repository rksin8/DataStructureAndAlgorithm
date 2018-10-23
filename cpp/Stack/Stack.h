/*
 * Stack.h
 *
 *  Created on: 19 Oct. 2018
 *      Author: ranjeet
 */

#ifndef STACK_H_
#define STACK_H_

#include <iostream>
#include <vector>

const int MAX_SIZE = 20;

class Stack {
public:
	Stack();
	~Stack();

	void push(int data);
	int pop();
	int top();
	int getSize();
	bool isEmpty();

	void print();

	//bool isFull();

private:
	int size;
	std::vector<int> stack_vector;
};

#endif /* STACK_H_ */
