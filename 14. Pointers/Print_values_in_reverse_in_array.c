#include <stdio.h>
int main()
{
        int i, *ptr, max;
        printf("Enter number of values\n");
        scanf("%d", &max);
        int num[max-1];
        printf("Enter values for array\n");
        for(i=0; i<max; i++)
                scanf("%d", &num[i]);

        ptr=&num[max-1];

        printf("Values printed by decrementing pointer\n");
        for(i=0; i<max; i++)
        {
                printf("%d\n", *ptr);
                ptr--;
        }
        return 0;
}
