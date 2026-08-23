/*
    条件：根据九宫格输入法，将字母转数字
    想法：根据ASCII码进行计算
*/

#include <stdio.h>

int main(){
    int n ,temp;
    char ch;

    printf("Enter phone number:");

    while((ch = getchar()) != '\n'){
        if (ch <= 79 && ch >= 65) {
            temp = ch - 64;
            
            n = (temp - 1) / 3 + 2;

            printf("%d" ,n);
        }
        else if (ch <= 90 && ch >= 80){
            n = 7;
            temp = ch - 80;
            
            if (temp <= 3){
                printf("%d" ,n);
            }

            if (temp <= 6 && temp >= 4){
                printf("%d" ,n + 1);
            }

            else {
                printf("%d" ,n + 2);
            }
        }
        else{
            printf("%c" ,ch);
        }
    }
    return 0;
}