/*
 * Stack.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: vidit
 */

#include "Stack.h"
#include <stdexcept>

void Stack::pop() {
	if(topSet){
		topSet=false;
		return;
	}
	if(myQueue.empty())
		return;
	while(myQueue.size()>1){
			tempQueue.push(myQueue.front());
			myQueue.pop();
	}
	myQueue.pop();
	std::queue<int> swap = myQueue;
	myQueue=tempQueue;
	tempQueue = swap;
}

void Stack::push(int x) {
	myQueue.push(x);
}

int Stack::top() {
	if(myQueue.empty())
		throw std::overflow_error("stack is empty");
	while(myQueue.size()>1){
		tempQueue.push(myQueue.front());
		myQueue.pop();
	}
	topSet = true;
	myTop = myQueue.front();
	myQueue.pop();
	std::queue<int> swap = myQueue;
	myQueue=tempQueue;
	tempQueue = swap;
	return myTop;
}

bool Stack::empty() {
	return myQueue.empty();
}
