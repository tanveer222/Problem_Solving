#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float root1, root2;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Input c: ");
    scanf("%d", &c);

    root1 = ((-b) + sqrt((b*b) - (4*a*c)))/(2*a);
    root2 = ((-b) - sqrt((b*b) - (4*a*c)))/(2*a);
    printf("Root 1: %.3f\n", root1);
    printf("Root 2: %.3f\n", root2);
    return 0;
}

