#include <stdio.h>
#define TRUE 1
#define FALSE 0

void clear(){
  int t;
  while ((t = getchar()) != '\n' && t !=EOF);
}

// 如果数字不正常，返回 FALSE，反之返回 TRUE
int checkInput(double *value){
  if (scanf("%lf" ,value) != 1){
    return FALSE;
  }else return TRUE;
}

int main(){
  double enter_number ,num_temp1;
  for(;;){
    printf("Enter a number:");

    if (checkInput(&enter_number) == FALSE){
      printf("Invalid Enter number.\n");
      clear();  
    }
    
    else if (enter_number <= 0){
      printf("First Number Cannot be zero or negative number.\n");
    }
    
    else {
      num_temp1 = enter_number;
      enter_number = 0;
      break;
    }
  }
  for (;;){
    printf("Enter a number:");

    if (checkInput(&enter_number) == FALSE){
      printf("Invalid Enter number.\n");
      clear();
      continue;
    }

    if (enter_number > 0){
      if (enter_number > num_temp1) {
        num_temp1 = enter_number;
        enter_number = 0;
      }
      
      else if (num_temp1 >= enter_number ){
        enter_number = 0;
      }
    }
    else {
      printf("The Max Number = %lf" ,num_temp1);
      break;
    }
  }
  return 0;
}


