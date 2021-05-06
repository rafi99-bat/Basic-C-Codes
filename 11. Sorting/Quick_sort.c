#include<stdio.h>
void QuickSort(int array[],int start,int end);
int main()
{
    int i,j,array[100],num;
    printf("Enter Number of Elements in Array\n");
    scanf("%d",&num);
    printf("Enter Elements of Array\n");
    for(i=0; i<num; i++)
        scanf("%d",&array[i]);
    QuickSort(array,0,num);
    printf("Array after Sorting\n");
    for(i=0; i<num; i++)
        printf("%d ",array[i]);
    printf("\n");
    return 0;
}

void QuickSort(int array[],int start,int end)
{
    int index=start,i,pivot=array[end],temp;
    if(start<end)
    {
        for(i=start; i<end; i++)
        {
            if(array[i]<=pivot)
            {
                temp=array[i];
                array[i]=array[index];
                array[index]=temp;
                index++;
            }
        }

        temp=array[index];
        array[index]=array[end];
        array[end]=temp;
        QuickSort(array,start,index-1);
        QuickSort(array,index+1,end);
    }
}
