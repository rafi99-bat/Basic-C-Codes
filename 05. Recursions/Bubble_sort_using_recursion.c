#include<stdio.h>
void BubbleSortRecursion(int a[],int num)
{
    int i,j,temp;
    i=num;
    if(i>0)
    {
        for(j=0; j<num-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        BubbleSortRecursion(a,num-1);
    }
    else
        return;
}

int main()
{
    int i,j,num,temp;
    printf("Enter number of elements\n");
    scanf("%d",&num);
    int a[num];
    printf("Enter numbers\n");
    for(i=0; i<num; i++)
        scanf("%d",&a[i]);

    BubbleSortRecursion(a,num);

    printf("Ascending order of given numbers is\n");
    for(i=0; i<num; i++)
        printf("%d\n",a[i]);
    return 0;
}
