/*EEEEE
  DDDD
  CCC
  BB
  A*/

#include<stdio.h>
void main()
{
    int i,j,num,k;
    printf("Enter number of rows: ");
    scanf("%d",&num);

    for(i=num; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c",i+64);

        }
        printf("\n");
    }
}
