#include <stdio.h>

int main(){
    int num1 ,i;

    printf("Entera number:\n");
    
    if (scanf("%d" ,&num1) != 1 || num1 <= 0 || num1 > 1000) {
      printf("Your Input was Invaild");
      return 1;
    }

    else if (num1 < 10){
      i = 1;
    }

    else if (num1 < 100){
      i = 2;
    }
    
    else if (num1 > 100 ){
      i = 3;
    }

    printf("The Number %d has %d digits." ,num1 ,i);
    return 0;
}
