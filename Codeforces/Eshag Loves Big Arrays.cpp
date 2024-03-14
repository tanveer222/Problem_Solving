// Eshag Loves Big Arrays
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,v=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[101]={0};
        for(int i=0;i<n;i++)
        {
            cin>>x;
            arr[x]++;
        }
        for(int i=1;i<101;i++)
        {
            if(arr[i]>0)
            {
                if(arr[i]==n)
                    v=n;
                else
                {
                    v=arr[i];
                    break;
                }
            }
        }
        cout<<n-v<<endl;
    }
    return 0;
}
