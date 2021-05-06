#include<stdio.h>
void selectionsort(int a[],int size);
int main()
{
    int i,j,size;
    printf("Enter number of elements\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter numbers\n");
    for(i=0; i<size; i++)
        scanf("%d",&a[i]);

    selectionsort(a,size);

    printf("Ascending order of given numbers is\n");
    for(i=0; i<size; i++)
        printf("%d\n",a[i]);
    return 0;
}

void selectionsort(int a[],int size)
{
    int temp,i,j,pointer;
    for(i=0; i<size-1; i++)
    {
        pointer=i;
        for(j=i+1; j<size; j++)
        {
            if(a[pointer]>a[j])
                pointer=j;
            if(pointer!=i)
            {
                temp=a[pointer];
                a[pointer]=a[i];
                a[i]=temp;
            }
        }
    }
}
