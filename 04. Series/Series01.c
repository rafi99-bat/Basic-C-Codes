/**
1+ 1/2+ 1/3+ 1/4+.....+ 1/n
*/
#include<stdio.h>
int main()
{
    int i,n;
    float sum=0;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        sum+=(float)1/i;
    printf("The value of\n");
    for(i=1; i<=n; i++)
    {
        if(i==1)
            printf("1+ ", i);
        else if(i<n)
            printf("1/%d+ ",i);
        else
            printf("1/%d= ",i);
    }
    printf("%f\n",sum);
    return 0;
}
