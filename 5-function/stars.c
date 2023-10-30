//
// Created by hfwei on 2023/10/11.
//
#include <stdio.h>

void Print(char ch, int count);
//void 函数不需要返回
int main(void) {
    int lines = 0;
    scanf("%d", &lines);

    for (int i = 0; i < lines; i++) {
        // print lines - 1 - i spaces
        Print(' ', lines - 1 - i);

        // print 2 * i + 1 stars
        Print('*', 2 * i + i);

        if (i < lines - 1) {
            printf("\n");
        }
    }

    return 0;
}

void Print(char ch, int count) {
    for (int j = 0; j < count; j++) {
        printf("%c", ch);
    }
}