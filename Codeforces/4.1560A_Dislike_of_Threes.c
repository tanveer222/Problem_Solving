#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &k);
        for(int j=1;; j++){
            if(j%3==0 || j%10==3)
                continue;
            else{
                k--;
                if(k==0){
                    printf("%d\n", j);
                    break;
                }
            }
        }
    }
    return 0;
}
