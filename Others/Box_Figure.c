#include<stdio.h>
int main()
{
    int height, width;
    scanf("%d %d", &height, &width);
    for(int i=1; i<=width; i++)
        printf("* ");
    printf("\n");
    for(int i=1; i<=height-2; i++)
        {
            printf("* ");
            for(int j=1; j<=width-2; j++)
                printf("  ");
            printf("*\n");
        }

    for(int i=1; i<=width; i++)
        printf("* ");
    return 0;
}
