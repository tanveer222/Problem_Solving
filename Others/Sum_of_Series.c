#include<stdio.h>
int main()
{
    int sum=0, count=1;
    for(int i=50; count<=20; i--)
    {
        sum = i+sum;
        if(count==20)
            break;
        count++;
    }
    printf("%d", sum);
    return 0;
}
