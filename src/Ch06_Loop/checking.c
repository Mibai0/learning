/*
    Author : Mibai.
    From : K.N 6.5 P81.
    Function : Menu ,The simple method
*/
#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

// 创建函数判断是否为正常数字
int getNumPossibility(double *value){
  if (isfinite(*value) == FALSE || *value < 0){
    return FALSE;
  }
  else{
    return TRUE;
  }
}

void clear(){
  int c;
  while((c = getchar()) != '\n' && c != EOF);
}

int main(){
  int cmd;
  double credit ,debit ,balance = 0.00;
  // 帮助提示
  printf(" *** ACME checkbook-balancing program ***\n");
  const char *help = "COMMAND : 0=clear 1=credit 2=debit 3=balance 4=exit\n"; 
  printf("%s" ,help);
  
  for(;;){
    printf("Enter Command:");
    if (scanf("%d" ,&cmd) != 1 || cmd < 0 || cmd >4){
      printf("Wrong Command\n");
      clear();
      printf("%s" ,help);
    }
    else {
    switch (cmd) {
      case 0:
        balance = 0.00;
        break;
      case 1:
        printf("Enter amount of credit:");
        if (scanf("%lf" ,&credit) != 1 || getNumPossibility(&credit) ==FALSE ){
          printf("Your enter credit was wrong.\n");
          clear();
        }else balance += credit;
        break;
      case 2:
        printf("Enter amount of debit:");
        if (scanf("%lf" ,&debit) != 1 || getNumPossibility(&debit) == FALSE){
          printf("Your enter debit was wrong.\n");
          clear();
        }else balance -= debit;
        break;
      case 3:
        printf("Your current balance: %.2f\n" ,balance);
        break;
      case 4:
        printf("Thanks\n");
        return 0;
    }  
  }
  }
}
