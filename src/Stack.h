/*
 * Stack.h
 *
 *  Created on: Nov 2, 2016
 *      Author: vidit
 */

#include<queue>
// stack using queue
#ifndef SRC_STACK_H_
#define SRC_STACK_H_

class Stack {
private:
	std::queue<int> myQueue;
	std::queue<int> tempQueue;
	int myTop;
	bool topSet;
public:
	void pop();
	void push(int x);
	int top();
	bool empty();
};

#endif /* SRC_STACK_H_ */
