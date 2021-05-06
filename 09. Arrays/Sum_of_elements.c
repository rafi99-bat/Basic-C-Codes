#include<stdio.h>
int main()
{
    int i,sum=0,size;
    printf("Enter size of array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements of Array\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Sum of elements of array=%d\n",sum);
    return 0;
}
