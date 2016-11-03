#include "viditbhatia.h"
#include "viditbhatia.cpp"
#include "TreeNode.h"
#include "TreeNode.cpp"
int main(int argc, char *argv[])
{
	TreeNode<int> x(1);
	std::vector<int> vector;
	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	vector.push_back(4);
	TreeNode<int>* result = x.constructTree(vector);
	ViditBhatia vb;
	std::vector<int> resultvector=vb.postorderTraversal(result);
	std::cout << "vidit";

}

