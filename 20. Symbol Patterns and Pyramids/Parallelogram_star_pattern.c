/**
 * C program to print Parallelogram star pattern series
 */

#include <stdio.h>

int main()
{
    int i, j, rows, columns;

    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &columns);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows - i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
