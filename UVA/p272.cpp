#include<stdio.h>
int main()
{
    char a;
    int i=1;

    while((a=getchar())!=EOF)
    {
        if(a=='"'){
            if(i==1)
            {
                printf("``");
                i++;
                continue;
            }
            else
            {
                printf("''");
                i--;
                continue;
            }
        }
        printf("%c",a);
    }
    return 0;
}
