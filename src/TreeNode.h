/*
 * Tree.h
 *
 *  Created on: Nov 2, 2016
 *      Author: vibhatia
 */

#ifndef TREE_H_
#define TREE_H_

#include <iostream>
#include <vector>

template<class T>
class TreeNode {
private:

    TreeNode<T>* constructTree(std::vector<T> data,int index);

public:
    T data;
    TreeNode<T>* left;
    TreeNode<T>* right;
    TreeNode(T data);
	void addLeft(T data);
	void addRight(T data);
	TreeNode<T>* constructTree(std::vector<T> data);
};

#endif /* TREE_H_ */
