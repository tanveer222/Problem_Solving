#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if((a>b)&&(a>c))
        printf("%d", b+c);
    else if((b>a)&&(b>c))
        printf("%d", a+c);
    else
        printf("%d", a+b);

    return 0;
}


