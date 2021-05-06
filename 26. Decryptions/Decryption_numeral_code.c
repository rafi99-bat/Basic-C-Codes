#include <stdio.h>
#include <math.h>
int main()
{
//Converts ascii value to base=2 or base=3 or base=4 etc including space and everything
//Ex:ABCDE-base=2:- Same as binary code encryption
//Ex:ABCD-base=3:-A-1001,B-1002,C-1003,D-1004
        int i,j,n,temp,x,decimal=0,base,inc;
        printf("Enter how many numbers are there\n");
        scanf("%d",&n);
        int num[n];
        printf("Enter numbers separated by space\n");
        for(i=0; i<n; i++)
                scanf("%d",&num[i]);
        printf("Enter base value to encrypt starting from 2\n");
        scanf("%d",&base);
        if(base>1)
        {

                printf("Decrypted Numeral code\n");
                for(i=0; i<n; i++)
                {
                        inc=0;
                        decimal=0;
                        temp=num[i];
                        while(temp!=0)
                        {
                                x=temp%10;
                                decimal=decimal+(x*pow(base,inc));
                                temp=temp/10;
                                inc++;
                        }
                        printf("%c",decimal);
                }
                printf("\n");
        }
        else
                printf("Please Enter base greater than or equal to 2\n");
        return 0;
}
