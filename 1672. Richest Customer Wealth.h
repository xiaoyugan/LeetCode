#pragma once
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        int temp;
        for (int i = 0; i < accounts.size(); i++)
        {
            temp = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                temp += accounts[i][j];
            }
            if(temp>=max)
            {
                max = temp;                
            }
        }
        return max;
    }
};
