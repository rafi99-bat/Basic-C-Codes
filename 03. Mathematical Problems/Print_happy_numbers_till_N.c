#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,num,happy,temp,sum=0;
    printf("Enter number till what you want happy numbers to be displayed\n");
    scanf("%d",&happy);
    for(i=1; i<=happy; i++)
    {
        sum=0;
        num=i;
        temp=num;
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
            printf("%d\n",i);
    }
    return 0;
}
