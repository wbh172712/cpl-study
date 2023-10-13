//
// Created by hfwei on 2023/10/6.
//

#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 0;
  int c = 0;

  scanf("%d%d%d", &a, &b, &c);

  // TODO: calculate the minimum of a, b and c
  int min = 0;
  if (a >= b) {
      if (b >= c){
          min = c;
      } else {
          min = b;
      }
  } else { // b > a
      if (a >= c){
          min = c;
      } else {
          min = a;
      }
  }

  printf("%d", min);
  return 0;
}