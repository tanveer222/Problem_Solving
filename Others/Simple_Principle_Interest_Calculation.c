#include<stdio.h>
int main()
{
    int time;
    float principle, rate, interest;
    printf("Enter principle: ");
    scanf("%f", &principle);
    printf("Enter time: ");
    scanf("%d", &time);
    printf("Enter rate: ");
    scanf("%f", &rate);
    interest = (principle * time * rate) / 100;
    printf("\nSimple Interest: %f\n", interest);
    printf("Principle + Interest: %.1f\n", principle + interest);

    return 0;
}
