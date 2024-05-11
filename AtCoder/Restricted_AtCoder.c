#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int check = ((a+b)<10)? printf("%d", a+b) : printf("error");

    return 0;
}

