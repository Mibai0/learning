/*
    此文件夹根据 learning\src\Ch08_array\Ch08_Card.c 文件进行温习
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(){
    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
    int num_cards ,rank , suit;
    const char ranks[] = {'2' , '3' , '4' , '5' ,'6' ,'7' ,
                         '8' ,'9' , 't' , 'j' , 'q' ,'k' , 'a'};
    const char suits[] = {'c' , 'd' ,'h' , 's'};

    srand((unsigned) time(NULL));

    printf("Please enter your cards on your hands:");
    scanf("%d", &num_cards);

    if (num_cards > 52){
        printf("You just can take cards less than 52!\n");
        return 0;
    }

    while (num_cards > 0){
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;

        if (in_hand[suit][rank] == false){
            in_hand[suit][rank] = true;
            num_cards--;
            printf("%c%c" ,ranks[rank],suits[suit]);
        }
    }
    printf("\n");
    return 0;
}