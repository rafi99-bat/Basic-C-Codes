#include <stdio.h>
#include <stdlib.h>
int main()
{
        int i, j, poly[26], x, k, num;
        printf("Enter how many numbers are there?\n");
        scanf("%d", &num);
        int numcipher[num];
        printf("Enter numbers separated by space\n");
        for(i=0; i<num; i++)
                scanf("%d",&numcipher[i]);

        x=0;
        k=11;

        for(i=0; i<=25; i++)
        {
                if(i<=8)
                {
                        if(i%5==0&&i!=0)
                        {
                                k+=5;
                                poly[k]=x;
                                k++;
                        }
                        else{
                                poly[k]=x;
                                k++;
                        }
                }
                if(i>=10)
                {
                        if(i%5==0&&i!=0)
                        {
                                poly[k]=x;
                                k++;
                                k+=5;
                        }
                        else{
                                poly[k]=x;
                                k++;
                        }
                }
                if(i==9)
                        poly[24]=8;
                x++;
        }
        printf("Decrypted Code using Polybius Square Cipher \n");
        for(i=0; i<num; i++)
                printf("%c",(poly[numcipher[i]]+65));
        printf("\n");
        return 0;
}
