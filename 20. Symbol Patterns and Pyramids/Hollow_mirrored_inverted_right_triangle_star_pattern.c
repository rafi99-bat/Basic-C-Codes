/**
 * C program to print hollow mirrored inverted right triangle star pattern
 */

#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }

        for(j=i; j<=rows; j++)
        {
            if(j==i || j==rows || i==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
