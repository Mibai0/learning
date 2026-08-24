#include <stdio.h>

int main(){
    char ch;

    printf("Enter the Number Phone Number.\n");

    while((ch = getchar()) != '\n'){
        if (ch <= 'O' && ch >='A'){
            printf("%d" ,(ch - 'A') / 3 + 2);
        }
        else if (ch <= 'Z' && ch >= 'P'){
            if (ch <= 'S')      printf("7");
            else if (ch <= 'V') printf("8");
            else                printf("9");
        }
        else printf("%c" ,ch);
    }

    return 0;
}