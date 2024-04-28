#include<stdio.h>
int main()
{
    int limit, months, new_limit=0, left=0;
    scanf("%d %d", &limit, &months);
    for(int m=1; m<=months; m++){
        int used;
        scanf("%d", &used);
        new_limit =left + limit;
        left = new_limit - used;
    }
    int final_limit = limit + left;
    printf("%d", final_limit);
    return 0;
}

