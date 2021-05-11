/**
   x – x3/3! + x5/5! – x7/7! + x9/9! -....xn/n!
 */
#include <stdio.h>

int main() {
        int x, n, sign = 1;
        float sum = 0;
        printf("Enter value of x and n:\n");
        scanf("%d%d", &x, &n);
        for(int i=1; i<=n; i+=2) {
                long pow = 1, fact =1;
                for(int j=1; j<=i; j++) {
                        pow = pow * x;
                        fact = fact * j;
                }
                sum = sum + (float) sign*pow/fact;
                sign *= -1;
        }
        printf("Sum = %.3f", sum);
        return 0;
}
