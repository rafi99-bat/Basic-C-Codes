#include <stdio.h>
#include <stdlib.h>
int main ()
{
        FILE *file;
        char c;
        file=fopen("file3append.txt","w");
        fprintf(file,"%s","Hello!");
        fclose(file);

        file=fopen("file3append.txt","r");
        printf("After writing\n");

        while(1)
        {
                if(file==NULL)
                {
                        printf("File Not Found\n");
                        exit(0);
                }
                else
                {
                        c=fgetc(file);
                        if(c==EOF)
                        {
                                break;
                        }
                        printf("%c",c);
                }
        }
        fclose(file);
        printf("\n");
        file=fopen("file3append.txt","a");
        fprintf(file,"%s","World");
        fclose(file);
        file=fopen("file3append.txt","r");
        printf("After appending\n");

        while(1)
        {
                if(file==NULL)
                {
                        printf("File Not Found\n");
                        exit(0);
                }
                else
                {
                        c=fgetc(file);
                        if(c==EOF)
                                break;
                        printf("%c",c);
                }
        }
        fclose(file);
        printf("\n");
        return 0;
}
