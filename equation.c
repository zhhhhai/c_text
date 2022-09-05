#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    float disc;
    while (scanf("%f %f %f", &a, &b, &c) != EOF) {
        if (a != 0) {
            disc = b * b - 4 * a * c;
            if (disc == 0) {
                printf("x1=x2=%.2f\n", (-b) / (2 * a));
            }
            else if (disc > 0) {
                printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(disc)) / (2 * a),
                    (-b + sqrt(disc)) / (2 * a));
            }
            else {
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi",
                    -b / (2 * a), sqrt(-disc) / (2 * a),
                    -b / (2 * a), sqrt(-disc) / (2 * a));
            }
        }
        else {
            printf("Not quadratic equation\n");
        }
    }
}