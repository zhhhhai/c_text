#include <stdio.h>

int main()
{
    char ch;
    while (scanf(" %c",&ch) != EOF) {//�ո����Ļس���
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            printf("%c is an alphabet.\n", ch);
            break;
        }
        else {
            printf("%c is not an alphabet.\n", ch);
        }
    }
    return 0;
}