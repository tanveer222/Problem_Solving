#include<stdio.h>
#include<string.h>
int main()
{
    char p[10];
    int i=1;
    while(scanf("%s", p))
    {
        if((strcmp(p,"*"))==0)
            break;
        else if((strcmp(p,"Hajj"))==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else
        {
            printf("Case %d: Hajj-e-Asghar\n",i);
        }
        i++;
    }
    return 0;
}
