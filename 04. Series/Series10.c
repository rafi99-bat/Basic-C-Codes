#include<stdio.h>
int main()
{
    int i,j,n,sum=0,pro;
    printf("Series: 1+ (1*2)+ (1*2*3)+....+ (1*2*3*...*n)");
    printf("Enter number of n\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        pro=1;
        for(j=1; j<=i; j++)
            pro*=j;
        sum+=pro;
    }
    printf("Sum of Series : %d\n",sum);
    return 0;
}
