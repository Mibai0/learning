// On Page 55 
//K.N  In C Programming Approach 
 
#include<stdio.h>

int main(){
    int trade;
    double t_trade;
    
    printf("Enter value of trade:\t");
    
    // min Commission is 39,trade <= 9 / 0.017
    if (scanf("%d" ,&trade) != 1 || trade <= (9 / 0.017)){
        printf("The Trade Invalid.\n");
        return 1;
    }
    else if (trade < 2500) t_trade = 30 + trade * 0.017;
    else if ( trade < 6250 ) t_trade = 56 + trade * 0.0066;
    else if (trade < 20000) t_trade = 76 + trade * 0.0034;
    else if (trade < 50000) t_trade = 100 + trade * 0.0022;
    else if (trade < 500000) t_trade = 155 + trade * 0.0011;
    else t_trade = 255 + trade * 0.0009;

    printf("Commission : \t%.2f\n" ,t_trade);

    return 0;
}
