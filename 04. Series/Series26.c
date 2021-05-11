/**
  x - x2/3! + x3/5! - x4/7! + x5/9! -.....xn/(2n-1)!
 */
#include <stdio.h>

int main() {
  int x, n;
  long pow = 1;
  double sum = 0;
  printf("Enter value of x and n :\n");
  scanf("%d%d", &x, &n);
  for(int i=1; i<=n; i++) {
          long fact = 1;
          pow = pow * x;
          for(int j=1; j<=2*i-1; j++)
                  fact = fact * j;
          if(i%2 == 0)
                  sum = sum - (float) pow/fact;
          else
                  sum = sum + (float) pow/fact;
  }
  printf("Sum = %.3lf", sum);
  return 0;
}
