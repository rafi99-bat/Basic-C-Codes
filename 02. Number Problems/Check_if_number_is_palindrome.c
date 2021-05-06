#include<stdio.h>
int main()
{
    int temp,n,rev=0,x;
    printf("Enter a number\n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }
    if(temp==rev)
        printf("The given number %d is a palindrome\n",rev);
    else
        printf("The given number %d is not a palindrome\n",rev);
    return 0;
}
