#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
        int i=0,j=0,k=0,flag=0;
        char *alphamorse[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
                            "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
                            "...-",".--","-..-","-.--","--.."};
        char *nummorse[]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};

        char morseCode[1000]={0},substr[1000][100]={0},c;
        printf("Enter a Morse Code with spaces\n");
        gets(morseCode);
        while(morseCode[k]!='\0')//for splitting sentence
        {
                j=0;
                while(morseCode[k]!=' '&&morseCode[k]!='\0')
                {
                        substr[i][j]=morseCode[k];
                        k++;
                        j++;
                }
                substr[i][j]='\0';
                i++;
                if(morseCode[k]!='\0')
                {
                        k++;
                }
        }
        int len=i;
        for(i=0; i<len; i++)
        {
                for(j=0; j<25; j++)
                {
                        if(!strcmp(alphamorse[j],substr[i]))//strcmp returns 0 if they are same
                        {
                                printf("%c",(j+65));
                                break;
                        }
                }
                for(j=0; j<9; j++)
                {
                        if(!strcmp(nummorse[j],substr[i]))
                        {
                                printf("%d",j);
                                break;
                        }
                }
        }
        printf("\n");
        return 0;
}
