//
// Created by hfwei on 2023/10/6.
//

#include <stdio.h>
#define NUM 5
int main(void) {
    int numbers[NUM] = {123, 1968, 23, 1231, 43 };

    int min = numbers[0];
    //for (init clause 初始化; condition expression 判断; iteration expression 循环之后进行迭代)
    for(int i = 1; i < NUM; i++){
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    printf("min = %d\n", min);

    return 0;
}