#include <stdio.h>
#include <math.h>

// Get Number Possibility
int getNumPossibility(const char *prompt ,double *value ,double min){
    printf("%s" ,prompt);

    if (scanf("%lf" ,value) != 1){
        return 1;
    }

    if (!isfinite(*value) || *value < 0){
        return 1;
    }
    return 0;
}

int main(void){
    double amount_Loans ,interest_Rates ,monthly_Payments;

    if (getNumPossibility("Enter Amount of Loans:\n" ,&amount_Loans ,0.00)){
        printf("Invalid Loan input.\n");
        return 1;
    }

    if (getNumPossibility("Enter Interest Rates:\n" ,&interest_Rates ,0.00)){
        printf("Invalid Rate Input.\n");
        return 1;
    }

    if (getNumPossibility("Enter Monthly Payments:\n" ,&monthly_Payments ,0.00)){
        printf("Invalid Payment.\n");
        return 1;
    }

    double balance[4];
    double monthly_Rates = interest_Rates / 12.00 / 100.00;
    balance[0] = amount_Loans;

    for (int i = 1; i < 4; i++){
        balance[i] = balance[i - 1] * (1 + monthly_Rates) - monthly_Payments;
        printf("Month %d ,balance is %.2f.\n" ,i ,balance[i]);
    }
    return 0;
}
