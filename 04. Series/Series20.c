/**
   1 + x1/2! + x2/3!...................+ xN/(N+1)!
 */
#include <stdio.h>

int main() {
        int x, n;
        long pow = 1, fact = 1;
        double sum = 1;
        printf("Enter the value of x and n :\n");
        scanf("%d%d", &x, &n);
        for(int i=2; i<=n+1; i++) {
                pow = pow * x;
                fact = fact * i;
                sum = sum + (float) pow/fact;
        }
        printf("Sum = %.3lf", sum);
        return 0;
}
