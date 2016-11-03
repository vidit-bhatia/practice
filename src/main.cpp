
#include "viditbhatia.h"
#include "viditbhatia.cpp"
#include "TreeNode.h"
#include "TreeNode.cpp"
#include <algorithm>

void myfunction (int i) {  // function:
  std::cout << ' ' << i;
}
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
	std::for_each(resultvector.begin(),resultvector.end(),myfunction);

}



