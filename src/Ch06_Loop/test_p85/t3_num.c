#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

void clear(){
  int j;
  while((j = getchar()) != '\n' && j != EOF);
}

// 确定n1 ,n2 为合适的数
int checkNum(int *value1 ,int *value2){
  if (*value1 < 0 || *value2 < 0){
    return FALSE;
  }
  else return TRUE;
}
// 计算分数位数
int calcFractionDigits(int *value3 ,int *value4){
   int a = *value3 ,b = *value4 ,t1 = 0 ,t2 = 0;
   do{
     a /= 10;
     t1++;
   }while(a > 0);
   do {
    b /= 10;
    t2++;
  }while (b > 0);
   return t1 + t2 + 1;
}

int main(){
  int num1 ,num2 ,t ,min;
  check:
  printf("Enter a fraction (a/b):");
  if(scanf("%d/%d" ,&num1 ,&num2) != 2 || checkNum(&num1 ,&num2) == FALSE){
    printf("Unknown Enter format.\n");
    clear();
    goto check;
  }
  else if(num2 == 0){
    printf("You cannot let zero be denominator.");
    goto check;
  }
  char fraction[calcFractionDigits(&num1,&num2) + 2];
  t = num1 % num2;
  if (num1 == 0 || t == 0) {
     snprintf(fraction,calcFractionDigits(&num1 ,&num2) + 2,"%d/%d",num1 ,num2);
     goto end;
  }
  int temp1 = num1 ,temp2 = num2;
  for(;;){
      if (t != 0){
       temp1 = temp2;
       temp2 = t;
       t = temp1 % temp2;
      }
      else {
       min = temp2;
       num1 /= min;
       num2 /= min;
       snprintf(fraction,calcFractionDigits(&num1,&num2) + 2, "%d/%d" ,num1 ,num2);
       break;
      }
    }
  end:
  printf("The lowest term :%s" ,fraction);
  return 0;
}
