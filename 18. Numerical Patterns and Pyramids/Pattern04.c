/*11111
  10001
  10001
  10001
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
            if(i==1 || i==r || j==1 || j==c)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
