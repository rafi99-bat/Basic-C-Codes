#include<stdio.h>
int GetMinimunNumber(int a[],int size,int min);
int main()
{
    int i,size,min;
    printf("Enter size to find smallest of given numbers\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter numbers in array\n");
    for(i=0; i<size; i++)
        scanf("%d",&a[i]);

    min=GetMinimunNumber(a,size-1,a[0]);
    printf("The smallest number is %d\n",min);
    return 0;
}
int GetMinimunNumber(int a[],int size,int min)
{
    if(size>=0)
    {
        if(a[size]<min)
            min=a[size];
        GetMinimunNumber(a,size-1,min);
    }
    else
        return min;
}
