/**
   1 + 1/x + 1/x2 + 1/x3 + 1/x4 +.....
 */
#include <stdio.h>

int main() {
        int x, n;
        long pow = 1;
        double sum = 1;
        printf("Enter value of x and n :\n");
        scanf("%d%d", &x, &n);
        for(int i=1; i<=n; i++) {
                pow = pow * x;
                sum = sum + (float) 1/pow;
        }
        printf("%.3lf", sum);
        return 0;
}
