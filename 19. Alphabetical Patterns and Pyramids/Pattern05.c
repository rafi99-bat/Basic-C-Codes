/*ABCDE
  ABCD
  ABC
  AB
  A*/

#include<stdio.h>

void main()
{
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=0; j<=n-i; j++)
        {
            printf("%c", j+65);
        }
        printf("\n");
    }
}

