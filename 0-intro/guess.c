//
// Created by wbh17 on 2023/9/8.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int number_of_tries = 7;

    //print the rule

    printf("Let us play the Guess the Number Game\n"
           "The computer will generate a number between 1 and 100\n");

    //choose a random number between 1~100

    srand(time(NULL));
    int secret = rand() % 100 + 1;
    printf("Test: secret = %d.\n", secret);
    //show the secret number(功能隐藏)

    printf("Please input your guess.\n"
           "You have %d tries.\n", number_of_tries);

    while(number_of_tries > 0) {

        int guess = 0;
        scanf("%d", &guess);
        printf("Your guess is %d.\n", guess);

        if (guess == secret) {
            printf("You Win!\n");
            break;
        } else if (guess > secret) {
            number_of_tries = number_of_tries - 1;
            printf("guess > secret\n");
            printf("You still have %d tries.\n", number_of_tries);
        } else {
            number_of_tries = number_of_tries - 1;
            printf("guess < secret\n");
            printf("You still have %d tries.\n", number_of_tries);
        }
    }
    
    if(number_of_tries == 0){
        printf("You Lose!");
    }
    return 0;
}
