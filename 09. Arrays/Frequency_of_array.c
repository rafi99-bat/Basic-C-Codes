#include<stdio.h>

int main()
{
    int n, i, j, count;

    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n], fr[n];
    printf("Enter %d elements in the array:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        fr[i]=1;
    }

    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                fr[j]=0;
            }
        }
        if(fr[i]!=0)
        {
            fr[i]=count;
        }
    }

    printf("\nThe frequency of all elements of array:\n");
    for(i=0; i<n; i++)
    {
        if(fr[i]!=0)
            printf("%d is %d times in the array\n", arr[i], fr[i]);
    }
    return 0;
}
