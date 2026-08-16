#include <stdio.h>

int main(void){
  int h ,m;
  printf("Enter A 24-Hour Time:");

  scanf("%d:%d" ,&h ,&m);

  if (h > 24 || h < 0 || m >59 || m <= 0) {
    printf("Wrong Time Input");
    return 1;
  }

  else if (h > 12){
    h = h - 12;
  }
  
  else {
    h = h;
  }

  printf("Equivalent 12-hour time :%d:%d\n" ,h ,m);
  return 0;
}
