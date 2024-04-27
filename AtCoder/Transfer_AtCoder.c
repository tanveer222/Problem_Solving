#include<stdio.h>
int main()
{
    int bottle_a, water_poured, bottle_b, space_left;
    scanf("%d %d %d", &bottle_a, &water_poured, &bottle_b);
    space_left = bottle_a - water_poured;
    int check = (space_left<bottle_b)? printf("%d", bottle_b-space_left) : printf("0");
    return 0;
}

