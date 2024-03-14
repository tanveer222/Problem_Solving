//Checking CapsLock
#include<stdio.h>
#include<string.h>
int main()
{
    char str[105];
    scanf("%s",str);

    //CHECK 1ST LOWER CASE AND REST ARE UPPER CASE
    if(str[0]>='a' && str[0]<='z')
    {
        for(int i=1;i<strlen(str);i++)
        {

            if(str[i]>='a' && str[i]<='z')
            {
                printf("%s",str);
                return 0;
            }
        }
        strlwr(str);
        str[0]=str[0] - 32;
        printf("%s",str);
        return 0;
    }

    //CHECK ALL UPPER CASE
    for(int i=0;i<strlen(str);i++)
    {

        if(str[i]>='a' && str[i]<='z')
        {
            printf("%s",str);
            return 0;
        }
    }
    strlwr(str);
    printf("%s",str);
    return 0;
}
