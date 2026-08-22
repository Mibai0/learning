#include <stdio.h>
#include <stdint.h>

int main(void){
    int8_t a = 0;
    uint8_t b = -1;
    int8_t c = a + b;
    uint8_t d = a + b;
    printf("a = %d, b = %u, c = %d, d = %u\n", a, b, c, d);
    return 0;
}