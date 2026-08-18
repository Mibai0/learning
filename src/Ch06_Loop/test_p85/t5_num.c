#include <stdio.h>

int calcDigit(int *value){
  int i = 0 ,temp = *value;
  do {
    temp /= 10;
    i++;
  }while(temp > 0);
  return i;
}

int main(){
  int num,digit =0;

  printf("Enter The number:");
  if(scanf("%d" ,&num) != 1 || num < 0){
    printf("Your input is wrong\n");
    return 1;
  }
  
  digit = calcDigit(&num);

  int temp[digit] ,result = 0;
  
  for (int i = 0 ;i < digit ;i++ ){
    temp[i] = num % 10;
    num /= 10;
    result = result * 10 + temp[i];
  }
  printf("%d" ,result);
}
