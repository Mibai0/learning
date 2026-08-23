/* 数组求和 
    输入形式数 ： aa bb cc dd 0
    自动求和
    更新：将类型更改为double
*/

#include <stdio.h>
#include <stdint.h>

int main(){
    double n ,num = 0;
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate):");

    scanf("%lf" ,&n);

    while (n != 0){
        num += n;
        scanf("%lf" ,&n);
    }
    printf("The sum is %.2f" ,num);

    return 0;
}