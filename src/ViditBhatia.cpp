/*
 * ViditBhatia.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: vibhatia
 */

#include <iostream>
#include <vector>
#include <stack>
#include "ViditBhatia.h"

ViditBhatia::ViditBhatia() {
	// TODO Auto-generated constructor stub

}

template<typename T>
std::vector<int> ViditBhatia::postorderTraversal(TreeNode<T>* root) {
	std::vector<int> result;
	        std::stack<TreeNode<T>*> temp;
	        std::stack<TreeNode<T>*> tempStack;
	        temp.push(root);
	        while(temp.empty()){
	        	TreeNode<T>* currentNode=temp.top();
	            temp.pop();
	            if(currentNode->left == NULL && currentNode->right==NULL){
	                result.push_back(currentNode->data);
	                continue;
	            }
	            if(tempStack.empty()||currentNode != tempStack.top()){
	                temp.push(currentNode);
	                if(currentNode->right != NULL)
	                    temp.push(currentNode->right);
	                if(currentNode->left != NULL)
	                    temp.push(currentNode->left);
	                tempStack.push(currentNode);
	            } else {
	                result.push_back(currentNode->data);
	                tempStack.pop();
	            }
	        }
	        return result;

}

