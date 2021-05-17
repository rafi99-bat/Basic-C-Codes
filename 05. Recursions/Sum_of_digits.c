#include <stdio.h>

int digitSum(int n) {
  static int sum = 0;
  if(n == 0)
    return sum;
  sum = sum + n % 10;
  digitSum(n/10);
}

int main() {
  int num;
  printf("Input any number to find sum of digits: ");
  scanf("%d", &num);
  printf("The Sum of digits of %d = %d", num, digitSum(num));
  return 0;
}
