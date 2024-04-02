#include<stdio.h>
int main()
{
    int star; //Input total number of line
    scanf("%d", &star);
    for(int i=0; i<star; i++)
    {
        for(int j=0; j<=i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
