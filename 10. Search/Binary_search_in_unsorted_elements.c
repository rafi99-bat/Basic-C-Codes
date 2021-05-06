#include<stdio.h>
int main()
{
    int i,j,n,searchno,temp,low,mid,high,flag=0;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n-1];
    printf("Enter the numbers in any order\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Enter the element to be searched\n");
    scanf("%d",&searchno);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("Sorted array is\n");
    for(i=0; i<n; i++)
        printf("%d\n",a[i]);
    low=1;
    high=n;

    do
    {
        mid=(high+low)/2;
        if(searchno<a[mid])
        {
            high=mid-1;
            flag=0;
        }
        else if(searchno>a[mid])
        {
            low=mid+1;
            flag=0;
        }
        else
        {
            flag=1;
            break;
        }
    }
    while(searchno!=a[mid]&&low<=high);

    if(flag==1)
        printf("Search Successful\n");
    else
        printf("Search is not Successful\n");
    return 0;
}
