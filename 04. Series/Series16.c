/**
   x - x2/2! + x3/3! - x4/4! + .....xn/n!
 */
#include <stdio.h>

int main() {
        int x, n;
        long pow = 1, fact = 1;
        double sum = 0;
        printf("Enter value of x and n :\n");
        scanf("%d%d", &x, &n);
        for(int i=1; i<=n; i++) {
                pow = pow * x;
                fact = fact * i;
                if(i%2 == 0)
                        sum = sum - (float) pow/fact;
                else
                        sum = sum + (float) pow/fact;
        }
        printf("Sum = %.3lf", sum);
        return 0;
}
