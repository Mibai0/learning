/*
    测试位运算：
*/
#include <stdio.h>
#include <limits.h>

void print_bin_ebit(unsigned long long x,int bits){
    for (int i = bits - 1;i >= 0;i--){
        putchar((x & (1u << i)) ? '1' : '0');
    }
    putchar('\n');
}

#define PRINT_BIN(v) print_bin_ebit((unsigned long long)v,(int)(sizeof(v) * CHAR_BIT))

int main(){
    unsigned short num1 = 0b11100101;
    unsigned short num2 = 0b00000100;
    unsigned short result = num1 & num2;
    PRINT_BIN(result);
}