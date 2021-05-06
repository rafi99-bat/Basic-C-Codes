#include <stdio.h>

int main()
{
    int i, x, n, r;
    float ncr, npr;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);
    if(n>=r)
    {
        int i=1;
        float sum1=1, sum2=1, sum3=1;
        for(i=1;i<=n;i++)
            sum1=sum1*i;
        for(i=1;i<=r;i++)
            sum2=sum2*i;
        for(i=1;i<=(n-r);i++)
            sum3=sum3*i;
    ncr=sum1/(sum2*sum3);
    npr=sum1/sum3;
    printf("%dC%d: %f\n", n, r, ncr);
    printf("%dP%d: %f\n", n, r, npr);
    }
    else
        printf("Cannot calculate nCr and nPr\n(Warning-r must be equal or smaller than n)");
    return 0;
}
