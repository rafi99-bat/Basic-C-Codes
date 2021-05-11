/**
  x + x3/2! + x5/3! + x7/4! + x9/5! +.....x2n-1/n!
 */
#include <stdio.h>

int main() {
        int x, n;
        long fact = 1;
        double sum = 0;
        printf("Enter value of x and n :\n");
        scanf("%d%d", &x, &n);
        for(int i=1; i<=n; i++) {
                long pow = 1;
                fact = fact * i;
                for(int j=1; j<=2*i-1; j++)
                        pow = pow * x;
                sum = sum + (float) pow/fact;
        }
        printf("Sum = %.3lf", sum);
        return 0;
}
