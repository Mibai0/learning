// On Page 55 
//K.N  In C Programming Approach 
 
#include<stdio.h>

int main(){
    double trade ,trade_Q ,trade_u_price;
    double t_trade;
    
    printf("Please Input Your Trade Quantity:");
          // min Commission is 39,trade <= 9 / 0.017
    if (scanf("%lf" ,&trade_Q) != 1 || trade_Q <= 0){
        printf("The Trade Invalid.\n");
        return 1;
    }

    printf("Please Input Trade unit price");
    
    if (scanf("%lf" ,&trade_u_price) !=1 || trade_u_price <= 0) {
        printf ("The unit price Invalid.\n");
        return 1;
    }
    
    trade = trade_Q * trade_u_price;
    
    if (trade <= (9 / 0.017)) {
        printf("The Min Commission should must more than 39");
        return 1;
    }
    
    
    else if (trade < 2500) t_trade = 30 + trade * 0.017;
    else if (trade < 6250) t_trade = 56 + trade * 0.0066;
    else if (trade < 20000) t_trade = 76 + trade * 0.0034;
    else if (trade < 50000) t_trade = 100 + trade * 0.0022;
    else if (trade < 500000) t_trade = 155 + trade * 0.0011;
    else t_trade = 255 + trade * 0.0009; 
    
    printf("Commission : \t%.2f\n" ,t_trade);

    return 0;
}
