// file: gcd-iter.c
//
// Euclidean algorithm:
// gcd(a, b) = gcd(b, a % b)
//
// Created by hfwei on 2023/11/9.

#include <stdio.h>

int GCD(int a, int b);

int main() {
    int a = 99;
    int b = 9;

    printf("gcd(%d, %d) = %d\n", a, b, GCD(a, b));

    return 0;
}

int GCD(int a, int b) {
    while (b != 0) {
        int tmp = a;
        a = b;
        b = tmp % b;
    }

    return a;
}