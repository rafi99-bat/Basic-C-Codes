#include<stdio.h>
int main()
{
    int i,a[100],num,sum=0,count=0;
    float avg;
    printf("Enter Number of elements you want\n");
    scanf("%d",&num);
    printf("Enter Elements in the array\n");
    for(i=0; i<num; i++)
    {
        scanf("%d",&a[i]);
        if((i+1)%2==0)
        {
            sum+=a[i];
            count++;
        }
    }

    avg=(float)(sum/count);
    printf("Average of Sum of  numbers at even positions is %f\n",avg);
    return 0;
}
