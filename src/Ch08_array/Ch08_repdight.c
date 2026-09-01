/*
    From: P116 K.N
    Note: 输入一个数字，并判断该数字
         是否重复。
    Author: Mibai0
*/
#include <stdio.h>
#include <stdbool.h> 


int main(void){
    int digit;
    long n;
    bool digit_seen[10] = {false};

    printf("Enter the number:");
    scanf("%ld" ,&n);

    while(n > 0){
        digit = n % 10;
        if (digit_seen[digit] == true){
            break;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0){
        printf("Repeated digit.");
    }
    else{
        printf("Not Found Repeated Num.");
    }

    return 0;
}