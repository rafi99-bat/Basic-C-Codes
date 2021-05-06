#include<stdio.h>
int GetSumOfDigits(int num);
int GetReverseOfNumber(int sumOfDigits);
void main()
{
    int i,num,sumOfDigits,reverseOfNumber;
    printf("Enter number to find out all magic numbers till N\n");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        sumOfDigits=GetSumOfDigits(i);
        reverseOfNumber=GetReverseOfNumber(sumOfDigits);
        if(sumOfDigits*reverseOfNumber==i)
            printf("%d\n",i);
    }
}

int GetSumOfDigits(int n)
{
    int sum=0,x;
    while(n>0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    return sum;
}

int GetReverseOfNumber(int n)
{
    int rev=0,x;
    while(n>0)
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    return rev;
}
