#include <stdio.h>

int main()
{
    char arr[20];
    int i = 0;
    scanf("%s", arr);//»ñÈ¡×ÖÄ¸´®
    int count_A = 0;
    int count_B = 0;
    while (arr[i] != 0) {
        if (arr[i] == 'A') {
            count_A++;
        }
        if (arr[i] == 'B') {
            count_B++;
        }
        i++;
    }
    if (count_A > count_B) {
        printf("A\n");
    }
    else if (count_A < count_B) {
        printf("B\n");
    }
    else {
        printf("E\n");
    }
    return 0;
}