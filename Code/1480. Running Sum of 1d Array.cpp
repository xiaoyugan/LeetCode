#include<iostream>
#include<vector>
using namespace std;

//1480
//class Solution {
//public:
//    vector<int> runningSum(vector<int>& nums) {
//        vector<int> sumVec;
//        int temp = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            temp += nums[i];
//            sumVec.push_back(temp);
//        }
//        return sumVec;
//    }
//};

//1672
//class Solution {
//public:
//    int maximumWealth(vector<vector<int>>& accounts) {
//        int max = 0;
//        int temp;
//        for (int i = 0; i < accounts.size(); i++)
//        {
//            temp = 0;
//            for (int j = 0; j < accounts[i].size(); j++)
//            {
//                temp += accounts[i][j];
//            }
//            if(temp>=max)
//            {
//                max = temp;                
//            }
//        }
//        return max;
//    }
//};

//1431
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> isEx;
        int mid = candies.size() / 2;
        int max = candies[mid];
        //find the max index 
        for (int i=0;i)
        {
            if (candies[mid] >= max)
            {
                max = candies[mid];

            }
        }

        for (int item :candies)
        {
            if (item + extraCandies < max)
            {
                isEx.push_back(false);
            }
            else
            {
                isEx.push_back(true);
            }
        }
        return isEx;
    }
};

int main()
{
    Solution s;
    //vector<vector<int>> a = { {2, 8, 7}, {7, 1, 3}, {1, 9, 5} };

    //s.maximumWealth(a);

    //cout<<s.maximumWealth(a);
    vector<int> candies = { 4, 2, 1, 1, 2 };

    s.kidsWithCandies(candies, 1);
    
    for(bool is : s.kidsWithCandies(candies, 1))
    {
        cout << is;
    }

    system("pause");
    return 0;
}