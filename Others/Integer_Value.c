#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a>0)
        printf("1");
    else if(a<0)
        printf("-1");
    else
        printf("0");
    return 0;
}
