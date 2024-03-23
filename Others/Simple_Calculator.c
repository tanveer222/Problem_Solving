#include<stdio.h>
int main()
{
    int a, b,result;
    char op;
    scanf("%d %c %d", &a, &op, &b);

    switch(op)
    {
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case '/':
        printf("%d", a/b);
        break;
    case '%':
        printf("%d", a%b);
        break;
    default:
        printf("Wrong input!!!");
        break;
    }
    return 0;
}
