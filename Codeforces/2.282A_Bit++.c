#include<stdio.h>
#include<string.h>
int main()
{
    int n, ini=0;
    char op[20];
    scanf("%d", &n);
    for(int i=n; i>=1; i--){
        scanf("%s", &op);
        if(strcmp(op, "X++")==0 || strcmp(op, "++X")==0)
            ini++;
        else if(strcmp(op, "X--")==0 || strcmp(op, "--X")==0)
            ini--;
    }
    printf("%d", ini);

    return 0;
}

