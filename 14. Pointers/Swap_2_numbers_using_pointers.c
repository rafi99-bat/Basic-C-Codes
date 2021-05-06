#include <stdio.h>
void swap(int *x, int *y)
{
        int t;
        t = *x;
        *x = *y;
        *y = t;
}

int main()
{
        int a,b;
        printf("Enter a and b values\n");
        scanf("%d%d",&a,&b);
        printf ("Values before Swap\na=%d\nb=%d\n",a,b );
        swap(&a,&b);
        printf ("Values after Swap\na=%d\nb=%d\n",a,b );
        return 0;
}
