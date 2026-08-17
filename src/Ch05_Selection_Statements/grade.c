#include <stdio.h>

int main(){
  int grade;

  printf("Please Enter A Grade:");

  if (scanf("%d",&grade) != 1||grade > 100 || grade < 0){
    printf("Invalid grade Input");
    return 1;
  }
  
  int second = grade / 10;
  char *letter;
  switch (second) {
  case 10: letter ="A"; break;
  case 9: letter = "A"; break;
  case 8: letter = "B"; break;
  case 7: letter = "C"; break;
  case 6: letter = "D"; break;
  default : letter = "F";break;
  }
  /*
  Write Annother format*/
// char letter[1];
// switch (grade){
// case 10 :letter[0] = "A";break; 
//}
//
  printf("Your Grade is %s " ,letter);
  return 0;
}
