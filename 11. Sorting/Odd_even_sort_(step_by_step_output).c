#include<stdio.h>
void printArray(int a[],int size);
int main()
{
    int i,flag,temp,size,count=0,even,odd;
    printf("Enter number of elements in array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter Elements of Array for Odd Even Sort\n");
    for(i=0; i<size; i++)
        scanf("%d",&a[i]);
    do
    {
        flag=0;
        count++;
        even=0;
        odd=0;

        for(i=1; i<size-1; i+=2)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                flag=1;
                odd=1;
            }
        }
        if(odd==1)
        {
            printf("%d.Array after Odd Sort\n",count);
            printArray(a,size);
        }

        for(i=0; i<size-1; i+=2)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                flag=1;
                even=1;
            }
        }
        if(even==1)
        {
            printf("%d.Array after Even Sort\n",count);
            printArray(a,size);
        }


    }
    while(flag);

    printf("\nArray after Final Sorting\n");
    printArray(a,size);
    printf("\n");
    return 0;
}

void printArray(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("%d ",a[i]);
}
