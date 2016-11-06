/*
 * Subsequence.cpp
 *
 *  Created on: Nov 5, 2016
 *      Author: root
 */

#include "Subsequence.h"
#include<string>
#include<unordered_map>
#include<vector>

bool Subsequence::isSubsequence(std::string s, std::string t) {
    std::unordered_map<int, std::vector<int> > preprocess;
    int tlength = t.length();
    if (tlength == 0)
        return false;
    for (int i = 0; i < tlength; i++) {
        std::vector<int> currentVector = preprocess[t[i]];
        int currentlength = currentVector.size();
        for (int j = currentlength; j <= i - currentlength; j++) {
            currentVector.push_back(j);
        }
    }
    int slength = s.length();
    if (slength == 0)
        return true;
    int pos = -1;
    for (int i = 0; i < slength; i++) {
        pos++;
        std::vector<int> currentVector = preprocess[s[i]];
        if (pos >= currentVector.size())
            return false;
        pos = currentVector[pos];
    }
    return true;
}

