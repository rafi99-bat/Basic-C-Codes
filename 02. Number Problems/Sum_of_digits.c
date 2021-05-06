#include<stdio.h>
void main()
{
    int temp,n,sum=0,x;
    printf("Enter a number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    printf("The sum of all digits in %d is %d\n",temp,sum);
}
