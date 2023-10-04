//A program to find targeted sum with two integer
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> output;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    output.push_back(i);
                    output.push_back(j);
                    return output;
                }
            }
        }
        return output;
    }
};
 int main()
 {
    Solution s;
    vector<int> nums={2,7,11,15};
    vector<int> result = s.twoSum(nums,9);
    for(int i: result)
    {
        cout<<i<<endl;
    }
 }
