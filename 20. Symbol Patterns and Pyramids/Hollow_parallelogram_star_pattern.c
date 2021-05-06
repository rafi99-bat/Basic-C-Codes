/**
 * C program to print hollow parallelogram star pattern
 */

#include <stdio.h>

int main()
{
    int i, j, rows, columns;

    printf("Enter rows : ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &columns);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=columns; j++)
        {
            if(i==1 || i==rows || j==1 || j==columns)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
