/**
   1 + x/1! + x3/2! + x5/3! + x7/4! +.....x2n-1/n!
 */
#include <stdio.h>

int main() {
        int x, n;
        double sum = 1;
        printf("Enter the value of x and n :\n");
        scanf("%d%d", &x, &n);
        for(int i=1; i<=n; i++) {
                long pow = 1;
                long fact = 1;
                for(int j=1; j<=2*i-1; j++)
                        pow = pow * x;
                for(int j=1; j<=i; j++)
                        fact = fact * j;
                sum = sum + (float) pow/fact;
        }
        printf("Sum = %.3lf", sum);
        return 0;
}
