/*11111
  11111
  11111
  11111
  11111*/

#include<stdio.h>

int main()
{
    int r, c, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            printf("1");
        }
        printf("\n");
    }

    return 0;
}
