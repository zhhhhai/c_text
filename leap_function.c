#include <stdio.h>

int main()
{
    int t;
    while(scanf("%d",&t) != EOF){
        if(t < 0){
            printf("0\n");
        }
        else if(t > 0){
            printf("1\n"); 
        }
        else{
            printf("0.5\n");
        }
    }
    return 0;
}