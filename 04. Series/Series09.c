#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Series:1+(1+2)+(1+2+3)+...+(1+2+3+...+n)\n");
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(int j=1; j<=i; j++)
            sum+=j;
    }
    printf("Sum= %d",sum);
    return 0;
}
