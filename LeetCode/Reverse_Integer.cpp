//A program to reverse an integer number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
    int flag = 1;

    if(x<0)
    {
        x = -1ll * x;
        flag=-1;
    }
    long long rev=0;
    int rem;
    while(x!=0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x/=10;
    }
    rev*=flag;
    if(rev<INT_MIN || rev>INT_MAX)
    {
        return 0;
    }
    return (int)rev;
    }
};

int main()
{
    Solution a;
    int x,rev;
    cin>>x;
    rev=a.reverse(x);
    cout<<rev;
}
