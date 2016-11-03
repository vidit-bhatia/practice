/*
 * Spiral.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: vidit
 */

#include "Spiral.h"
#include<vector>

std::vector<int> Spiral::spiralOrder(std::vector<std::vector<int> >& matrix) {
	std::vector<int> result;
	        if(matrix.empty())
	            return result;
	        int minM=0;
	        int maxM=matrix.size();
	        int minN=0;
	        int maxN=matrix[0].size();
	        while(minM<maxM && minN<maxN){
	            for(int i=minN;i<maxN;i++){
	                result.push_back(matrix[minM][i]);
	            }
	            for(int i=minM+1;i<maxM;i++){
	                result.push_back(matrix[i][maxN-1]);
	            }
	            for(int i=maxN-2;i>=minN;i--){
	                result.push_back(matrix[maxM-1][i]);
	            }
	            for(int i=maxM-2;i>minM;i--){
	                result.push_back(matrix[i][minN]);
	            }
	            minN++;minM++;maxM--;maxN--;
	        }
	        return result;
}
