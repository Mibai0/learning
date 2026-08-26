/*
    题目：十二小时制转二十四小时制
    getchar判断接收到AM，PM
*/
#include<stdio.h>

void convertTime(int *h ,char *ch){
    if (ch[0] == 'P' && *h != 12){
        *h += 12;
    }
    if (ch[0] == 'A' && *h == 12){
        *h += 0;
    }

}

int main(void){
    char ch[3];
    int h ,m;

    printf("Enter The 12-hour time:(Format:hh-mm AM/PM)");
    scanf("%d-%d %2s" ,&h ,&m ,ch);
    
    convertTime(&h ,ch);

    printf("Equivalent 24-hour time:%d:%d" ,h ,m);

    return 0;
}
