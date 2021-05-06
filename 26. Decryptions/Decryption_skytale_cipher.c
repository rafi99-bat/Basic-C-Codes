#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
        int i, j, k, len, turns, code[100][1000], col, rows;
        char str[1000];
        printf("Enter an Encrypted Message\n");
        gets(str);
        len=strlen(str);
        printf("Enter number of turns on band\n");
        scanf("%d",&turns);
        k=0;
        rows=ceil((float)len/turns);//for storing the entered sentence column wise instead of row wise
        //initializing code to zero
        for(i=0; i<len;)
        {
                for(j=0; j<rows; j++)
                {
                        code[j][k]=0;
                        i++;
                }
                k++;
        }
        k=0;
        //storing messages in code according to turns on band
        for(i=0; i<len;)
        {
                if(str[i]!=' ')
                {
                        for(j=0; j<rows;)
                        {
                                if(i<=len)
                                {
                                        if(str[i]!=' ')//to avoid spaces in between words
                                        {
                                                code[j][k]=(int)str[i];
                                                i++;
                                                j++;
                                        }
                                        else
                                                i++;

                                }
                                else
                                        break;
                        }
                        k++;
                }
                else
                        i++;
        }

        printf("The Decrypted message using Scytale Cipher is\n");

        col=k;
        for(i=0; i<rows; i++)
        {
                for(j=0; j<turns; j++)
                {
                        if(code[i][j]!=0)
                                printf("%c",code[i][j]);
                }
        }
        printf("\n");
        return 0;
}
