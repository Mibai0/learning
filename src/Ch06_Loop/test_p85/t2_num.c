#include <stdio.h>

int main(){
  int integer_1 ,integer_2 ,max ,r;
  printf("Enter two integers(aa-bb):");

  scanf("%d-%d" ,&integer_1 ,&integer_2);

  if (integer_2 == 0 || integer_1 == 0){
    max = (integer_1 == 0) ? integer_2 : integer_1;
    goto finish;
  }
  
  for(;;){
    if (integer_1 % integer_2 == 0){
      max = integer_2;
      break;
    }
    
    else if (integer_1 % integer_2 != 0) {
      r = integer_1 % integer_2;
      integer_1 = integer_2;
      integer_2 = r;
    }
  }
  finish:
    printf("Greatest common divisor:%d" ,max);
    return 0;
}
