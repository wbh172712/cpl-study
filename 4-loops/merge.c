//
// Created by hfwei on 2023/10/19.
//

#include <stdio.h>

#define LEN_L 5
#define LEN_R 6
// 数组中元素均从小到大排列
int L[LEN_L] = { 1, 3, 5, 7, 9 };
int R[LEN_R] = { 0, 2, 4, 6, 8, 10 };

int main(void) {
    // TODO: merge L and R into a sorted array

    int l = 0;
    int r = 0;
    while (l < LEN_L && r < LEN_R) {
        //printf("%d ", L[l] <= R[r] ? L[l++] : R[r++]);

        if (L[l] <= R[r]) {
            printf("%d ", L[l]);
            l++;
        } else {
            printf("%d ", R[r]);
            r++;
        }
    }

    // 若其中一个数组已全部输出，按顺序输出另一个数组的全部元素
    while (r < LEN_R) {
        printf("%d ", R[r]);
        r++;
    }
    while (l < LEN_L) {
        printf("%d ", L[l]);
        l++;
    }

    return 0;
}