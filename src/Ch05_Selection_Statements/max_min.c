#include <stdio.h>

int main(){
  int n1 ,n2 ,n3 ,n4;
  
  printf("Please Input 4 numbers(format:aa-bb-cc-dd):");
  scanf("%d-%d-%d-%d" ,&n1 ,&n2 ,&n3 ,&n4);

  int g_1max ,g_2max ,g_1min ,g_2min ,max ,min;
  int g1[2] ,g2[2];

  g1[0] = n1;
  g1[1] = n2;
  g2[0] = n3;
  g2[1] = n4;
  
  if (g1[0] > g1[1]) {
    g_1max = g1[0];
    g_1min = g1[1];
  }
  else {
    g_1max = g1[1];
    g_1min = g1[0];
  }

  if (g2[0] > g2[1]) {
    g_2max = g2[0];
    g_2min = g2[1];
  }
  else {
    g_2max = g2[1];
    g_2min = g2[0];
  }

  if (g_2max > g_1max){
    max = g_2max;
  }
  else {
    max =g_1max;
  }
  if (g_2min < g_1min){
    min = g_2min;
  }
  else {
    min = g_1min;
  }

  printf("The Max is %d ,the min is %d" ,max,min);
  return 0;
}
