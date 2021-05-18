#include <stdio.h>
#include <stdlib.h>
int main()
{
        FILE *file1, *file2, *mergeFile;
        char c;
        file1=fopen("file1.txt","r");
        file2=fopen("file2.txt","r");

        if(file1==NULL)
        {
                printf("File 1 Not Found\n");
                exit(0);
        }

        if(file2==NULL)
        {
                printf("File 2 Not Found\n");
                exit(0);
        }

        mergeFile=fopen("mergefile.txt","w");
        if(mergeFile==NULL)
        {
                printf("Merge File Not Found\n");
                exit(0);
        }
        while(1)
        {
                c=fgetc(file1);
                if(c!=EOF)
                        fputc(c,mergeFile);
                else
                        break;
        }
        fputs("\n---------------------From file 2--------------------\n",mergeFile);
        while(1)
        {
                c=fgetc(file2);
                if(c!=EOF)
                        fputc(c,mergeFile);
                else
                        break;
        }
        fclose(file1);
        fclose(file2);
        fclose(mergeFile);
        printf("Successfully Merged\n");
        return 0;
}
