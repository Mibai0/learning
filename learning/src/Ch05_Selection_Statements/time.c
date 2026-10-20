#include <stdio.h>

int main(void){
  int h ,m;
  char *timeAP; 
  printf("Enter A 24-Hour Time:");

  scanf("%d:%d" ,&h ,&m);

  if (h > 23 || h < 0 || m >59 || m < 0) {
    printf("Wrong Time Input");
    return 1;
  }

  else if (h > 12){
    h = h - 12;
    timeAP = "PM";
  }

  else{
    timeAP = "AM";
  }

  printf("Equivalent 12-hour time :%02d:%02d %s\n" ,h ,m ,timeAP);
  return 0;
}
