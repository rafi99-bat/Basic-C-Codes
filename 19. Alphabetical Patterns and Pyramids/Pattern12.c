/*ABCDEDCBA
  ABCD DCBA
  ABC   CBA
  AB     BA
  A       A*/

#include<stdio.h>
void main()
{
    int i,j,k=0,space=1,rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c",j+64);
        }
        if(i!=rows)
        {
            for(k=1; k<=space; k++)
            {
                printf(" ");
            }
            space+=2;
        }
        for(j=i; j>=1; j--)
        {
            if(j!=rows)
                printf("%c",j+64);
        }
        printf("\n");
    }
    printf("\n");
}
