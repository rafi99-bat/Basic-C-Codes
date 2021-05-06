/**
a + ar + ar2 + ar3+....+ar(n-1)
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, n;
    float sum=0, a, r;
    printf("Enter a, r, n:\n");
    scanf("%f%f%d",&a, &r, &n);
    for (i=0; i<n; i++)
    {
        long pow = 1;
        for(j=1; j<=i; j++)
        {
            pow = pow * r;
        }
        sum = sum + a * pow;
    }
    printf("%.2lf \n",sum);
    return 0;
}
