//
// Created by hfwei on 2023/10/6.
//

#include <stdio.h>

int main(void) {
    int NUM;
    scanf("%d", &NUM);

    int numbers[NUM];
    for (int i = 0; i < NUM; i++) { // int i = 0;变量i的作用域仅限于for(){}内部,since C99
        scanf("%d", &numbers[i]);
    }

    int min = numbers[0];
    for (int i = 1; i < NUM; i++) { // int i = 1;
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    printf("min = %d\n", min);

    return 0;
}