#include<stdio.h>

int main()
{
    int i, j, n1, n2, k, count;

    printf("enter the first array size: ");
    scanf("%d",&n1);
    int a[n1], fr[n1];
    printf("enter the first array values:\n");
    for(i=0; i<n1; i++)
        scanf("%d",&a[i]);

    printf("enter the second array size: ");
    scanf("%d",&n2);
    int b[n2];
    printf("enter the second array values:\n");
    for(i=0; i<n2; i++)
        scanf("%d",&b[i]);

    for(i=0; i<n2; i++)
    {
        a[n1]=b[i];
        n1++;
    }

    printf("Elements of the merged array are:\n");
    for(i=0; i<n1; i++)
    {
        printf("%d\n", a[i]);
        fr[i]=1;
    }

    for(i=0; i<n1; i++)
    {
        count = 1;
        for(j=i+1; j<n1; j++)
        {
            if(a[i]==a[j])
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

    printf("Elements of the merged array after removing duplicates:\n");
    for(i=0; i<n1; i++)
    {
        if(fr[i]!=0)
            printf("%d\n", a[i]);
    }
    return 0;
}
