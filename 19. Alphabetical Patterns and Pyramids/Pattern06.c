/*AAAAA
  BBBB
  CCC
  DD
  E*/

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);

    int k=65;
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c",k);
        }
        k++;
        printf("\n");
    }
}
