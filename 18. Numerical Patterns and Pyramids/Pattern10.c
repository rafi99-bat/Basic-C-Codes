/*11111
  22222
  33333
  44444
  55555*/

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
