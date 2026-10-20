/*
    作用：初始化多维数组
    原理：通过循环进行赋值
*/
#define NUMBER 5
int main(){
    int m[NUMBER][NUMBER];
    for (int i = 0 ;i < NUMBER ;i++){
        for (int n = 0 ;n < NUMBER ;n++){
            m[n][i] = 0.00;
        }
    }
    return 0;  
}