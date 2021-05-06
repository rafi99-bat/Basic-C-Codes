#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,size,j,zerosCount=0;
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
    for(i=0; i<size; i++)
    {
        if(a[i]==0)
            zerosCount++;
    }
    for(i=0; i<size; i++)
    {
        if(i>=zerosCount)
            a[i]=0;
        else
            a[i]=1;
    }
    for(i=0; i<size; i++)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}
