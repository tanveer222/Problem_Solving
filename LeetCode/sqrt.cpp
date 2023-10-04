//A program to find square root of a number and find nearest integer
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        int sqx = sqrt(x);
        return sqx;
    }
};
int main()
{
    Solution a;
    int n;
    cin>>n;
    int ans = a.mySqrt(n);
    cout<<ans;
}
