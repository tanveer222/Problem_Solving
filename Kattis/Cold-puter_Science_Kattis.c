#include<stdio.h>
int main()
{
    int days, temp, days_count=0;
    scanf("%d", &days);
    for(int i=0; i<days; i++){
        scanf("%d", &temp);
        if(temp<0)
            days_count++;
    }
    printf("%d", days_count);
    return 0;
}


