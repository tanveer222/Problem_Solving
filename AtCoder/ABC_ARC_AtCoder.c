#include<stdio.h>
int main()
{
    int rating;
    scanf("%d", &rating);
    int check = (rating<1200)? printf("ABC") : printf("ARC");
    return 0;
}


