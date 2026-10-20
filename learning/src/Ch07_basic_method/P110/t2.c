/*
    //参考：src/Ch06_Loop/square2.c
    #include<stdio.h>
    int main(void){
        int i ,n;

        printf("This Program prints a table of squares.\n");
        printf("Enter the number of entires in table:");
        scanf("%d" ,&n);

        for (i = 1 ;i <= n ;i++){
            printf("%10d%10d\n" ,i ,i * i);
        }

         return 0;
     }

*/
//程序要求：满足24次方后暂停并显示
//  Press Enter to continue
#include <stdio.h>

int main(void){
    int i , n , ch;
    float t;
    printf("This Program prints a tables of squares.\n");
    printf("Enter the number of entires in table:");
    scanf("%d" ,&n);
    ch = getchar();

    for (i = 1; i <= n ;i++){
        printf("%10d%10d\n" ,i ,i * i);
        t = i % 24;
        if (t == 0){
            printf("Please enter to continue.");
            while((ch = getchar()) != '\n'){};
        }
    }
    return 0;
}
