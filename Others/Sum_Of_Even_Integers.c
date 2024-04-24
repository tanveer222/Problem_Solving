#include<stdio.h>
int main()
{
    int n,num,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Input %d integers: ", n);
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        if(num%2==0)
            sum = sum + num;
    }
    printf("Sum of even integers = %d", sum);
    return 0;
}

