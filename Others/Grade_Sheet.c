#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    switch(a/10)
    {
    case 10:
        printf("A+");
        break;
    case 9:
        printf("A+");
        break;
    case 8:
        printf("A+");
        break;
    case 7:
        printf("A");
        break;
    case 6:
        printf("B");
        break;
    case 5:
        printf("C");
        break;
    case 4:
        printf("D");
        break;
    default:
        printf("F");
        break;
    }
    return 0;
}
