#include <stdio.h>

const char map[] = "22233344455566677778889999";

int main(){
    
    char ch;

    printf("Please enter the number:");

    while ((ch = getchar()) != '\n') {
        if (ch <= 'Z' && ch >= 'A'){
            putchar(map[ch - 'A']);
        }
        else putchar(ch);
    }
    return 0;
}