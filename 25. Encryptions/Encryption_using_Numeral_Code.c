#include <stdio.h>
#include <string.h>
int main()
{
//Converts ascii value to base=2 or base=3 or base=4 etc including space and everything
//Ex:ABCDE-base=2:- Same as binary code encryption
//Ex:ABCD-base=3:-A-1001,B-1002,C-1003,D-1004
        int i, temp, x, y=1, binary=0, base;
        char str[1000];
        printf("Enter a sentence\n");
        gets(str);
        printf("Enter base value to encrypt starting from 2\n");
        scanf("%d",&base);
        if(base>1)
        {
                i=0;
                printf("Encrypted Binary code\n");
                while(str[i]!='\0')
                {
                        y=1,binary=0;
                        temp=str[i];
                        while(temp!=0)
                        {
                                x=temp%base;
                                binary=binary+(x*y);
                                temp=temp/base;
                                y=y*10;
                        }
                        printf("%d ",binary);

                        i++;
                }
                printf("\n");
        }
        else
                printf("Please Enter greater than or equal to 2\n");
        return 0;
}
