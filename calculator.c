#include <stdio.h>

int main()
{
    double num1;
    double num2;
    char op;
    while (scanf("%lf%c%lf", &num1, &op, &num2) != EOF) {
        switch (op) {
        case '+':
            printf("%.4lf+%.4lf=%.4lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.4lf-%.4lf=%.4lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.4lf*%.4lf=%.4lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0.0) {
                printf("Wrong!Division by zero!\n");
            }
            else {
                printf("%.4lf/%.4lf=%.4lf\n", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Invalid operation!\n");
            break;
        }
    }
    return 0;
}