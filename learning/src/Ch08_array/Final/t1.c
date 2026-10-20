/*
原题：修改8.1节的程序 [learning\src\Ch08_array\Ch08_repdight.c]
    使其显示出哪些数字有重复（如果有的话）：
输出示例：
Enter a number: 939577
Repeated digits:9 7
*/

/*
想法：创建两个个一维数组：【一】为数字，【二】为布尔(非bool类型的int)
    仿造 [learning\src\Ch08_array\Ch08_Card.c]
*/

#include <stdbool.h>
#include <stdio.h>

int main(){
    int number ,digits = 0;
    printf("Enter a number:");
    scanf ("%d" ,&number);
    printf("Repeated digits:");
    int numberCopy = number;
    do{
        digits++;
        number /= 10;
    }while(number >= 1);
    int data[digits],note[10] = {0};
    for (int i = 0;i < digits;i++){
        data[i] = 0;
    }
    for (int i = digits - 1;i >= 0;i--){
        data[i] = numberCopy % 10;
        numberCopy /= 10;
    }
    for (int i = 0;i < digits;i++){
        note[data[i]] += 1;
    }
    for (int i = 0;i < 10;i++){
        if (note[i] >= 2){
            printf("%d\t" ,i);
        }
    }
}