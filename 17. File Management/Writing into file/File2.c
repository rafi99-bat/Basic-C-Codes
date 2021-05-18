#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
        FILE *file;
        char s[100];
        file=fopen("file2.txt","w");

        if(file==NULL)
        {
                printf("File Not Found\n");
                exit(0);
        }
        else
        {
                printf("Enter lines to write in file\n");
                while(strlen(gets(s))>0)
                {
                        fputs(s,file);
                        fputs("\n",file);
                }
        }
        fclose(file);
        return 0;
}
