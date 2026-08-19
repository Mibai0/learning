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

int calcGCD(int value3 ,int value4){
  int temp3 = value3 ,temp4 = value4 ,r;
  for (;;){
    r = temp3 % temp4;
    if (r == 0) {
      return (temp3 > temp4) ? temp4 :temp3;
    }
    else {
      temp3 = temp4;
      temp4 = r;
  }
}
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
  char fraction[32];
  t = num1 % num2;
  if (num1 == 0 || t == 0) {
     snprintf(fraction,sizeof(fraction),"%d/%d",num1 ,num2);
     goto end;
  }
  min = calcGCD(num1,num2);
  num1 /= min;
  num2 /= min;
  snprintf(fraction,sizeof(fraction) ,"%d/%d", num1,num2);
  end:
  printf("The lowest term :%s" ,fraction);
  return 0;
}
  
