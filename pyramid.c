#include <stdio.h>

int main()
{
    int i;
    int j;
    int num;
    while(scanf("%d",&num) != EOF){
        for(i = 0; i < num; i++){
            for(j = 0; j < num - i - 1; j++){
                printf(" ");
            }
            for(j = 0; j <= i; j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}