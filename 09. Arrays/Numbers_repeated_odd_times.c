#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,size,max, *a;
    printf("Enter size of array\n");
    scanf("%d",&size);
    a = (int*) calloc(size, sizeof(int) );
    printf("Enter Elements\n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];

    for(i=0; i<size; i++)
    {
        if(max<a[i])
            max=a[i];
    }
    max+=1;

    int b[max];

    a=(int*) realloc(a,max*sizeof(int));
    for(i=0; i<=max; i++)
    {
        b[i]=0;
        if(i>=size)
            a[i]=0;
    }

    for(i=0; i<=max; i++)
    {
        if(a[i]!=0)
            b[a[i]]=b[a[i]]+1;
    }
    printf("Numbers repeated odd numbers of times\n");
    for(i=0; i<=max; i++)
    {
        if(b[i]%2==1 && b[i]!=0)
            printf("%d\n",i);
    }
    return 0;
}
