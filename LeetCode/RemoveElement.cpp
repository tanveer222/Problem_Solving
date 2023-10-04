//A program to remove target element from an array or list
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int s = nums.size();
        for(int i=0;i<s;i++)
        {
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};
int main()
{
    Solution a;
    vector<int> nums = {2,3,3,2};
    int val = 2;
    int k = a.removeElement(nums,val);
    cout<<k<<endl;
    for(int i : nums)
    {
        cout<<nums[i]<<',';
    }
}
