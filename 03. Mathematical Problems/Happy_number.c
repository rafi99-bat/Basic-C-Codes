/**
A number is called happy if it leads to 1 after a sequence of steps
wherein each step number is replaced by the sum of squares of its digit that is if we start with Happy Number
and keep replacing it with digits square sum, we reach 1.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,num,temp,sum=0;
    printf("Enter number\n");
    scanf("%d",&num);
    while(sum!=1 && sum!=4)
    {
        sum=0;
        while(num>0)
        {
            j=num%10;
            sum+=(j*j);
            num=num/10;
        }
        num=sum;
    }

    if(sum==1)
        printf("Happy Number\n");
    else
        printf("UnHappy Number\n");
    return 0;
}
