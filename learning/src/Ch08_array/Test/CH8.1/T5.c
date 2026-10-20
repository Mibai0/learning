/*
    实现斐波那契数列
*/
#include <stdio.h>

int main(){
    long fib[40] = {0};
    fib[0] = 0;fib[1] = 1;
    for (int i = 2;i < 40;i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0;i < 40;i++){
        printf("%7ld\t",fib[i]);
    }
}