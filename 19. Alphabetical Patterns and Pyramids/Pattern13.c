/*Spiral Number Pattern*/

#include<stdio.h>
void main()
{
    int i,rows,k=1;
    printf("Enter number of Rows for Spiral Alphabet Pattern from 1 to 13\n");
    scanf("%d",&rows);
    if(rows<=13 && rows>=1)
    {
        for(i=1; i<=rows*2; i+=2)
        {
            if(k%2==1)
            {
                printf("%c\t%c",i+64,i+65);
                k++;
            }
            else
            {
                printf("%c\t%c",i+65,i+64);
                k++;
            }
            printf("\n");
        }
    }
    else
    {
        printf("Please Enter from 1 to 13 only\n");
    }
}
