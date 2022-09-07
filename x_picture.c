#include <stdio.h>

int main()
{
    int i;
    int j;
    int num;
    while (scanf("%d", &num) != EOF) {
        for (i = 0; i < num; i++) {
            for (j = 0; j < num; j++) {
                if (i == j) {
                    printf("*");
                }
                else if (i + j == num - 1) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}