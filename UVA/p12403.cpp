#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,total_money=0,k,x;
    char p[8],d[8]="donate";
    scanf("%d",&t);
    if((t<1)||(t>100))
        goto stop;

    for(i=1;i<=t;i++)
    {
        scanf("%s",&p);
        x=strcmp(p,d);
        if(x==0)
        {
            scanf("%d",&k);
            if((k<100)||(k>100000))
                break;
            else
                total_money=total_money+k;
        }
        else
        {
            printf("%d\n",total_money);
        }
    }
    stop:
    return 0;
}
