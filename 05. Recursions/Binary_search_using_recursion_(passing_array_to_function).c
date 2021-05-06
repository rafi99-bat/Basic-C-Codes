#include<stdio.h>
void sort(int n,int a[])
{
    int i,j,temp;
    for(i=0; i<n; i++) //for sorting in ascending order
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
}

void binarysearch(int low,int high,int a[],int searchno)
{
    int mid;
    if(low>high)
    {
        printf("Search is not successful\n");
        return;
    }
    mid=(low+high)/2;
    if(a[mid]==searchno)
    {
        printf("Search successful\n");
        return;
    }

    else if(searchno<a[mid])
        binarysearch(low,mid-1,a,searchno);
    else if(searchno>a[mid])
        binarysearch(mid+1,high,a,searchno);
}

void binarysearch(int low,int high,int a[],int searchno);
int main()
{
    int i,n,searchno;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n-1];
    printf("Enter the numbers in sorted order\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    sort(n,a);

    printf("Sorted array is\n");
    for(i=0; i<n; i++)
        printf("%d\n",a[i]);
    printf("Enter element to be searched\n");
    scanf("%d",&searchno);
    binarysearch(1,n,a,searchno);
    return 0;
}



