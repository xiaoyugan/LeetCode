#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sumVec;
        int temp = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            temp += nums[i];
            sumVec.push_back(temp);
        }
        return sumVec;
    }
};