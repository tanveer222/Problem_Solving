#include<stdio.h>
int main()
{
    float a;
    printf("Enter number: ");
    scanf("%f", &a);
    printf("Integer part: %d\n", (int)a);
    printf("Real part: %f", a - (int)a);

    return 0;
}
