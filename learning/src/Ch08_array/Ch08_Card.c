/*
    目标：创建一个二维数组，将卡牌花色与大小作为数组的index
        将用户输入与rank_code,suit_code相比较，如果出现，则在in-hand中对应的位置
        为true
    需求：随机数，循环，二维数组
*/

#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_SUIT 4
#define NUM_RAND 13

int main(void){
    bool in_hand[NUM_SUIT][NUM_RAND] = {false};
    int num_cards ,rank ,suit;
    const char rank_code[] = {'2','3','4','5','6','7','8','9',
                             't','j','q','k','a'};
    const char suit_code[] = {'c','d','h','s'};

    srand((unsigned) time(NULL));

    printf("Enter a number of cards in hand:");
    scanf("%d" ,&num_cards);
    if (num_cards > 52){
        printf("You can't get cards numbers more than 52");
        return 1;
    }

    printf("Your hand:");
    while (num_cards > 0) {
        suit = rand() % NUM_SUIT;
        rank = rand() % NUM_RAND;
        if (!in_hand[suit][rank]){
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c",rank_code[rank] ,suit_code[suit]);
        }
    }
    printf("\n");
    return 0;
}