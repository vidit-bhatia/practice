
#include "viditbhatia.h"
#include "viditbhatia.cpp"
#include "TreeNode.h"
#include "TreeNode.cpp"
#include <algorithm>
#include "Stack.h"
#include"spiral.h"

void myfunction (int i) {  // function:
  std::cout << ' ' << i;
}
/*int main(int argc, char *argv[])
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

}*/

/*int main(int argc, char *argv[])
{
	Stack x;
	x.push(1);
	x.pop();
	std::cout<<x.empty();

}*/
int main(int argc, char *argv[])
{
	Spiral x;
	std::vector<std::vector<int> > matrix;
	std::vector<int> simpleMatrix;
	simpleMatrix.push_back(1);
	simpleMatrix.push_back(2);
	simpleMatrix.push_back(3);
	matrix.push_back(simpleMatrix);
	std::vector<int> simpleMatrix1;
	simpleMatrix1.push_back(4);
	simpleMatrix1.push_back(5);
	simpleMatrix1.push_back(6);
	matrix.push_back(simpleMatrix1);
	std::vector<int> simpleMatrix2;
		simpleMatrix2.push_back(7);
		simpleMatrix2.push_back(8);
		simpleMatrix2.push_back(9);
		matrix.push_back(simpleMatrix2);
	std::vector<int> result = x.spiralOrder(matrix);
	std::for_each(result.begin(),result.end(),myfunction);
}
