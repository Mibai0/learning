/*
    Author : Mibai
    Function : Calculates the numbers of digits in an integer.
    Page : Ch 6.3 P73
*/
#include <stdio.h>

int main(){
  long num ,digits = 0;

  printf("Please Input The Number:");

  if (scanf("%ld" ,&num) != 1 || num <= 0){
    printf("Your Input Invalid.");
    return 1;
  }

  else {
    do{
      num /= 10;
      digits++; 
    }while(num > 0);
  }
  printf ("Your number has %ld digits" ,digits);
  return 0;
}
