#include<stdio.h>
int main()
{
    int hour, amount_hour;
    float salary;
    printf("Input the working hrs: ");
    scanf("%d",&hour);
    printf("Salary amount/hr: ");
    scanf("%d",&amount_hour);
    salary = hour * amount_hour;
    printf("Salary: %.2f", salary);

    return 0;
}
