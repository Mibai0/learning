/*
    用途：计算100美元经过N年投资，以x倍利率，
          X,(X+1),...(X+5)后多少元
    输出示例：
*/
#include <stdio.h>
#define INITIAL_BALANCE 100

int main(void){
    int yearNum;
    double yearly_interestRate;

    //用户输入
    printf("Enter interest Rate:");
    scanf("%lf" ,&yearly_interestRate);
    printf("Enter number of years:");
    scanf("%d" ,&yearNum);
    double balance[5];
    for (int i = 0 ; i < 5 ; i++){
        balance[i] = INITIAL_BALANCE;
    }
    //输出表头
    printf("Years\t");
    for (int i = 0 ;i < 5 ;i++){
        printf("%lf" ,yearly_interestRate + i);
    }
    double interestRate = yearly_interestRate / 100.00;
    printf("\n");
    //输出表行
    
    for (int i = 0 ;i < yearNum ;i++){
        printf("%d\t" ,i + 1);
        for (int n = 0 ;n < 5 ;n++){
            balance[n] *=(1 + (yearly_interestRate + n ) * 0.01);
            printf("%.2lf\t" ,balance[n]);
        }
        printf("\n");
    }
}