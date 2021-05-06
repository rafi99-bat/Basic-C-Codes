#include <stdio.h>
int main()
{
        int i, n, sum=0, *ptr;
        printf("Enter number \n");
        scanf("%d", &n);
        int var[n-1];
        printf("Enter values in array\n");
        for(i=0; i<n; i++)
                scanf("%d", &var[i]);
        ptr=&var[0];
        for(i=0; i<n; i++)
        {
                sum+=*ptr;
                ptr++;
        }

        printf("Sum=%d\n", sum);
        return 0;
}
