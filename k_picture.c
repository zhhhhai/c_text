#include <stdio.h>

int main()
{
    int i;
    int j;
    int num;
    while(scanf("%d",&num) != EOF){
        for(i = 0; i <= num; i++){
            for(j = 0; j <= num - i; j++){
                printf("* ");
            }
            printf("\n");
        }
        for(i = 0; i < num; i++){
            for(j = 0; j < i+2; j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}