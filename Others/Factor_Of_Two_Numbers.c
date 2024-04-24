#include<stdio.h>
#include<stdbool.h>
int main()
{
    int x, y;
    bool chk = true;
    scanf("%d %d", &x, &y);
    for(int i=1; i<=y; i++){
        if(i%x==0 && y%i==0){
            printf("%d\t", i);
            chk = false;
        }
    }
    if(chk)
        printf("No such integer.");
    return 0;
}

