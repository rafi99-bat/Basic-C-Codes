/**
   x + x2/2! + x3/3! + x4/4! + .....xn/n!
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
                for(int j=1; j<=i; j++) {
                        pow = pow * x;
                }
                fact = fact * i;
                sum = sum + (float)pow/fact;
        }
        printf("Sum = %.3lf", sum);
        return 0;
}
