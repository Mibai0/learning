/*
    用途：计算100美元经过N年投资，以x倍利率，
          X,(X+1),...(X+5)后多少元
    输出示例：
*/
#include <stdio.h>
#include <stdbool.h>
#define INITIAL_BALANCE 100

//判断数字在金融学上是否成立
//成立则为TRUE，不成立则为FALSE
int checkNum(int int_num ,int double_num){
    if (int_num <= 0 || double_num <= 0){
        return false;
    }
    return true;
}

int main(void){
    double yearlyRates;
    int yearsNum;
    printf("Enter interest rate:");
    scanf("%lf" ,&yearlyRates);
    printf("Enter numbers of years:");
    scanf("%d" ,&yearsNum);
    
    double yearlyBalance[yearsNum];
    printf("Years");
}