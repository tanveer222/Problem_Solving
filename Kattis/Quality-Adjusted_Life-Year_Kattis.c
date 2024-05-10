#include<stdio.h>
int main()
{
    int n;
    float a , b, sum_of_multiply = 0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%f %f", &a, &b);
        sum_of_multiply = sum_of_multiply + (a*b);
    }
    printf("%.3f", sum_of_multiply);
    return 0;
}



