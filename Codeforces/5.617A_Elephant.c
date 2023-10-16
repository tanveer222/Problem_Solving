#include<stdio.h>
int main()
{
    int des, step=0, times;
    scanf("%d", &des);
    for(int i=5; i>0; i--){
        if(des<i) continue;
        times = des/i;
        des = des%i;
        step += times;
        if(des==0) break;
    }
    printf("%d", step);
    return 0;
}
