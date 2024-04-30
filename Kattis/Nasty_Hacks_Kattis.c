#include<stdio.h>
int main()
{
    int t, r, e, c;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d", &r, &e, &c);
        if(e-c>r)
            printf("advertise\n");
        else if(e-c<r)
            printf("do not advertise\n");
        else
            printf("does not matter\n");
    }
    return 0;
}

