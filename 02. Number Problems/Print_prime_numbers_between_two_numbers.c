#include<stdio.h>
void main()
{
    int num1,num2,i,count=0,j;
    printf("Enter a number 1\n");
    scanf("%d",&num1);
    printf("Enter a number 2\n");
    scanf("%d",&num2);
    printf("The Prime numbers between %d and %d are\n",num1,num2);
    for(i=num1; i<=num2; i++)
    {
        count=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("%d\n",i);
    }
}
