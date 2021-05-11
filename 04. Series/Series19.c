/**
   1- 2/21 + 3/31 – 4/41 + 5/51....
 */
#include <stdio.h>

int main() {
        int n;
        float sum = 1;
        printf("Enter value of n");
        scanf("%d", &n);
        for(int i=2; i<=n; i++) {
                if(i%2 == 0)
                        sum = sum - (float) i/((i*10)+1);
                else
                        sum = sum + (float) i/((i*10)+1);
        }
        printf("Sum = %.3f", sum);
        return 0;
}
