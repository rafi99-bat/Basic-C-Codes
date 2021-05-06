/*EEEEEEEEE
  DDDD DDDD
  CCC   CCC
  BB     BB
  A       A
  BB     BB
  CCC   CCC
  DDDD DDDD
  EEEEEEEEE*/

#include<stdio.h>
void main()
{
    int i,j,k=0,space=1,size;
    printf("Enter size: ");
    scanf("%d",&size);
    for(i=size; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c",i+64);
        }
        if(i!=size)
        {
            for(k=1; k<=space; k++)
            {
                printf(" ");
            }
            space+=2;
        }
        for(j=i; j>=1; j--)
        {
            if(j!=size)
                printf("%c",i+64);
        }

        printf("\n");

    }

    space-=4;
    for(i=2; i<=size; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c",i+64);
        }
        if(i!=size)
        {
            for(k=1; k<=space; k++)
            {
                printf(" ");
            }
            space-=2;
        }
        for(j=i; j>=1; j--)
        {
            if(j!=size)
                printf("%c",i+64);
        }

        printf("\n");

    }
}
