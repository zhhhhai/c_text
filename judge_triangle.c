#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c && c == a) {
                printf("Equilateral triangle!\n");
            }
            else if ((a == b && b != c) || (b == c && c != a) || (c == a && a != b)) {
                printf("Isosceles triangle!\n");
            }
            else {
                printf("Ordinary triangle!\n");
            }

        }
        else {
            printf("Not a triangle!\n");
        }
    }
    return 0;
}