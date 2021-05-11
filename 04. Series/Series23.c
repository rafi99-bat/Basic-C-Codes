/**
   1 + x2/1! + x4/2! + x6/3! + x8/4! +......x2n/n!
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
                for(int j=1; j<=2*i; j++)
                        pow = pow * x;
                for(int j=1; j<=i; j++)
                        fact = fact * j;
                sum = sum + (float) pow/fact;
        }
        printf("Sum = %.3lf", sum);
        return 0;
}
