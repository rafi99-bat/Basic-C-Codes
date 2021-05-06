#include<stdio.h>
int main()
{
    int i,size,max,max2,position;
    printf("Enter size to find largest and smallest of given numbers\n");
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

    printf("The first largest number is %d\n",max);
    printf("The second largest number is %d\n",max2);
    return 0;
}
