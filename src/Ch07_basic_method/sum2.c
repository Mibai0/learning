/* 数组求和 
    输入形式数 ： aa bb cc dd 0
    自动求和
*/

#include <stdio.h>

int main(){
    long n ,num = 0;
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate):");

    scanf("%ld" ,&n);

    while (n != 0){
        num += n;
        scanf("%ld" ,&n);
    }
    printf("The sum is %ld" ,num);

    return 0;
}