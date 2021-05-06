#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,num,power,temp;
    printf("Enter Number\n");
    scanf("%d",&num);
    printf("Enter Power you want to check\n");
    scanf("%d",&power);
    temp=num;
    if(num==0 || num==1)
    {
        printf("Enter Number other than zero and 1\n");
        exit(0);
    }
    while(num>1)
    {
        if(num%power!=0)
        {
            printf("Given Number %d is not power of %d\n",temp,power);
            exit(0);
        }
        num=num/power;
    }
    printf("Given Number %d is power of %d\n",temp,power);
    return 0;
}
