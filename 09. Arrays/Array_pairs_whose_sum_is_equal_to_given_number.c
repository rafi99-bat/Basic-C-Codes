#include<stdio.h>
int main()
{
    int i,j,k,n,add,flag=0;
    printf("Enter number of elements in array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter an added number for which you want distinct pairs from an array\n");
    scanf("%d",&add);
    printf("Enter Elements of arrays\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Array elements which when added gives %d\n",add);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if((a[i]+a[j])==add)
            {
                flag=1;
                printf("(%d,%d) found at [%d,%d]\n",a[i],a[j],i+1,j+1);
            }
        }
    }
    if(flag==0)
        printf("Not Found\n");
    return 0;
}
