/**
   1 + x2/2! + x4/4! + x6/6! + ..... xn/n!
 */
#include <stdio.h>

int main()
{
        int x, n;
        float sum = 1;
        printf("Enter value of x and n:\n");
        scanf("%d%d", &x, &n);
        for(int i=2; i<=n; i+=2) {
                long pow = 1, fact =1;
                for(int j=1; j<=i; j++) {
                        pow = pow * x;
                        fact = fact * j;
                }
                sum = sum + (float) pow/fact;
        }
        printf("Sum = %f", sum);
        return 0;
}
