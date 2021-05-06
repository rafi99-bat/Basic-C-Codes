#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
        int i, j, k, len, turns, code[100][1000], col;
        char str[1000];
        printf("Enter a Secret Message\n");
        gets(str);
        len=strlen(str);
        printf("Enter number of turns on band\n");
        scanf("%d",&turns);
        k=0;
        for(i=0; i<len;)
        {
                for(j=0; j<turns; j++)
                {
                        code[k][j]=0;
                        i++;
                }
                k++;
        }
        k=0;

        for(i=0; i<len;)
        {
                if(str[i]!=' ')
                {
                        for(j=0; j<turns;)
                        {
                                if(i<=len)
                                {
                                        if(str[i]!=' ')//to avoid spaces in between words
                                        {
                                                code[k][j]=(int)str[i];
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
        printf("The encrypted message is\n");

        col=k;
        for(i=0; i<turns; i++)
        {
                for(j=0; j<col; j++)
                {
                        if(code[j][i]!=0)
                                printf("%c",code[j][i]);

                }
        }
        printf("\n");
        return 0;
}
