#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,size,temp,j,left,right;
    printf("Enter Size of Array\n");
    scanf("%d",&size);
    int a[size];
    printf("Enter 1's and 0's only\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
        if(!(a[i]==0 || a[i]==1))
        {
            printf("Please Enter either 0 or 1\n");
            exit(0);
        }
    }
    left=0;
    right=size-1;
    while(left<right)
    {
        while(a[left]==0 && left<right)
            left++;
        while(a[right]==1 && left<right)
            right--;
        if (left < right)
        {
            a[left] = 0;
            a[right] = 1;
            left++;
            right--;
        }
    }
    for(i=0; i<size; i++)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}
