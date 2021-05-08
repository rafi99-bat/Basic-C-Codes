/*01010
  01010
  01010
  01010
  01010*/

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
            if(j%2 == 1)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}
