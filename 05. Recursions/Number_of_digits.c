#include <stdio.h>

int digitNumber(int n) {
  static int count = 0;
  if(n == 0)
    return count;
  count++;
  digitNumber(n/10);
}

int main() {
  int num;
  printf("Input a number : ");
  scanf("%d", &num);
  printf("The number of digits in the number is : %d", digitNumber(num));
  return 0;
}
