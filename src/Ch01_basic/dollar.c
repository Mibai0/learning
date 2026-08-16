#include <stdio.h>

int main(){
    int dollars;
    
    printf("Please Input Dollar Amounts:\n");
    scanf("%d" ,&dollars);

    int balance = dollars;
    int bills_20 ,bills_10 ,bills_5 ,bills_1;

    bills_20 = balance / 20;
    balance = balance - bills_20 * 20;

    bills_10 = balance / 10;
    balance = balance - bills_10 *10;

    bills_5 = balance / 5;
    balance =balance - bills_5 * 5;

    bills_1 = balance;

    printf("Bills 20$ :%d\n" ,bills_20);
    printf("Bills 10$ :%d\n" ,bills_10);
    printf("Bills 5$ :%d\n" ,bills_5);
    printf("Bills 1$ :%d\n" ,bills_1);

    return 0;
}
