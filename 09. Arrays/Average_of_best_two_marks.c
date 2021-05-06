#include<stdio.h>
int main()
{
    int i,size,max,max2,position;
    printf("Enter size to find average of 2 best text marks out of given size\n");
    scanf("%d",&size);
    int a[size],temp[size-1];
    printf("Enter numbers in array\n");
    for(i=0; i<size; i++)
        scanf("%d",&a[i]);
    max=a[0];
    position=0;

    for(i=0; i<size; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            position=i;
        }
    }
    for(i=0; i<size-1; i++)
    {
        if(i<position)
            temp[i]=a[i];
        if(i>=position)
            temp[i]=a[i+1];
    }
    max2=temp[0];
    printf("\n");
    for(i=0; i<size-1; i++)
    {
        if(temp[i]>max2)
            max2=temp[i];
    }

    printf("Average of 2 best out of %d test marks is (%d + %d)/2=%f\n",size,max,max2,((max+max2)/2.0));
    return 0;
}
