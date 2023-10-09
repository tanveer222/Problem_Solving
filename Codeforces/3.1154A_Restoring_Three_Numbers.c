#include<stdio.h>
int main()
{
    int a, b, c, d, num1, num2, num3;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b && a>c && a>d){
        num1 = a - b;
        num2 = a - c;
        num3 = a - d;
    }
    else if(b>a && b>c && b>d){
        num1 = b - a;
        num2 = b - c;
        num3 = b - d;
    }
    else if(c>a && c>b && c>d){
        num1 = c - a;
        num2 = c - b;
        num3 = c - d;
    }
    else{
        num1 = d - a;
        num2 = d - b;
        num3 = d - c;
    }
    printf("%d %d %d ", num1, num2, num3);
    return 0;
}
