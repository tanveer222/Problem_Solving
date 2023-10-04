//A program to check palindrome number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) {
            return false;
        }
        else if(x<10) {
            return true;
        }
        else {
            int temp=x;
            vector<int> nums;
            while(temp!=0)
            {
                int m = temp%10;
                temp = temp/10;
                nums.push_back(m);
            }
            int flag;
            int size=nums.size();
            int ss=size-1;
            for(int i=0, j=ss;i<size;i++,j--)
            {
                    if(nums[i]==nums[j])
                    {
                        flag=1;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
            }
            if(flag==0) {
                return false;
            }
            else {
                return true;
            }
        }
    }
};
int main()
{
    Solution a;
    int n;
    cin>>n;
    bool res=a.isPalindrome(n);
    if(res)
        cout<<"true";
    else
        cout<<"false";
}
