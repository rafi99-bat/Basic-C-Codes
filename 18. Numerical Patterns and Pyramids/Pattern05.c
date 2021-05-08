/*11111
  11111
  11011
  11111
  11111*/

#include<stdio.h>

int main()
{
    int r, c, i, j;
    int centerRow, centerCol;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int p = (r + 1) / 2;
    int q = (c + 1) / 2;

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(q == j && p == i)
            {
                printf("0");
            }
            else if(c%2 == 0 && q+1 == j)
            {
                if(p == i || (r%2 == 0 && p+1 == i))
                    printf("0");
                else
                    printf("1");
            }
            else if(r%2 == 0 && p+1 == i)
            {
                if(q == j || (c%2 == 0 && q+1 == j))
                    printf("0");
                else
                    printf("1");
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
