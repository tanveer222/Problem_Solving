#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int check = ((c>=a)&&(c<=b))? printf("Yes") : printf("No");

    return 0;
}
