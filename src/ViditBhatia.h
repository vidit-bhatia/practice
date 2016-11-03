/*
 * ViditBhatia.h
 *
 *  Created on: Nov 2, 2016
 *      Author: vibhatia
 */

#ifndef VIDITBHATIA_H_
#define VIDITBHATIA_H_

#include "TreeNode.h"

class ViditBhatia {

public:
	ViditBhatia();
	template<typename T>
	std::vector<int> postorderTraversal(TreeNode<T>* root);
};

#endif /* VIDITBHATIA_H_ */
