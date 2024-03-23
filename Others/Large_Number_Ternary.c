#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int res;
    res = (a>b)? printf("%d is large number.", a) : printf("%d is large number.", b);
    return 0;
}
