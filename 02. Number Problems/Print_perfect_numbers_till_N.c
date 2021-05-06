#include<stdio.h>
#include<math.h>
void main()
{
    int num,i,sum,j;
    printf("Enter a number to know all perfect numbers till n\n");
    scanf("%d",&num);
    printf("The perfect numbers between 1 and %d are:",num);
    for(i=1; i<=num; i++)
    {
        sum=0;
        for(j=1; j<i; j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            printf("%d\n",i);
    }
}
