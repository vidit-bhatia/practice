/*
 * Tree.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: vibhatia
 */

#include "TreeNode.h"

template <class T>
TreeNode<T>::TreeNode(T data){
	this->data=data;
	this->left=NULL;
	this->right=NULL;
}

template <class T>
void TreeNode<T>::addLeft(T data){
	this->left = new TreeNode(data);
}

template <class T>
void TreeNode<T>::addRight(T data){
	this->right = new TreeNode(data);
}

template <class T>
TreeNode<T>* TreeNode<T>::constructTree(std::vector<T> data){
	return this->constructTree(data,1);
}

template <class T>
TreeNode<T>* TreeNode<T>::constructTree(std::vector<T> data,int index){
	if(index>data.size())
		return NULL;
	TreeNode<T>* currentNode= new TreeNode<T>(data[index-1]);
	currentNode->left = constructTree(data,2*index);
	currentNode->right=constructTree(data,2*index+1);
	return currentNode;
}
