/**
   1 + 1/1! + 1/2! + 1/3! + .....
 */
#include <stdio.h>

int main() {
        int i, n;
        long fact = 1;
        double sum = 1;
        printf("Enter value of n : ");
        scanf("%d", &n);
        for(i=1; i<=n; i++) {
                fact = fact * i;
                sum = sum + (float) 1/fact;
        }
        printf("Sum = %.3lf", sum);
        return 0;
}
