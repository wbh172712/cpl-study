//
// Created by wbh17 on 2023/9/8.
//
#include <stdio.h>
int main(){
    int radius;
    /*
     * int,double限定其取值范围
     * int radius = 10;
     * 初始化，将radius赋值为10
     * 命名不得以“_”开头
     */
    double area, circumference;
    const double PI = 3.1415926;

    scanf("%d", &radius);
    // %d为占位，d表示十进制的整行数
    // &radius获取radius的值
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("circumference = %.2f\n", circumference);
    printf("area = %.2f\n", area);
    // f表示浮点数（double）
    // .2f表示输出的数保留两位小数，控制精度
    // .是区分指令的，不是小数点

    return 0;
}