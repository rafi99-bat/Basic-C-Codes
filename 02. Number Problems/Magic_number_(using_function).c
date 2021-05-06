#include<stdio.h>
int GetSumOfDigits(int num);
int GetReverseOfNumber(int sumOfDigits);
void main()
{
    int num,sumOfDigits,reverseOfNumber;
    printf("Enter number to find out magic number or not\n");
    scanf("%d",&num);
    sumOfDigits=GetSumOfDigits(num);
    reverseOfNumber=GetReverseOfNumber(sumOfDigits);
    if(sumOfDigits*reverseOfNumber==num)
        printf("%d is a Magic Number\n",num);
    else
        printf("%d is not a Magic Number\n",num);
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
