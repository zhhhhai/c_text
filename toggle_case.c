#include <stdio.h>

int main()
{
    char ch;
    while((ch = getchar()) != EOF){
        if( ch >= 'A' && ch <= 'Z'){
            printf("%c\n",ch+32);
        }
        if(ch >= 'a' && ch <= 'z'){
            printf("%c\n", ch-32);
        }
    }
    return 0;
}