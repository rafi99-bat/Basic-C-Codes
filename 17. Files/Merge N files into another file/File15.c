#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
        char c,fileNames[100][30],mergeFileName[30];
        int num,i;
        printf("Enter number of files to merge\n");
        scanf("%d",&num);
        FILE *file[num],*mergeFile;
        for(i=0; i<num; i++)
        {
                printf("Enter File name %d with extension like xxxx.txt without spaces\n",i+1);
                fflush(stdin);
                scanf("%s",&fileNames[i]);
                file[i]=fopen(fileNames[i],"r");
                if(file[i]==NULL)
                {
                        printf("File %d Not Found\n",i);
                        exit(0);
                }
        }
        printf("Enter file name to which all files have to be merged like xxxx.txt\n");
        fflush(stdin);
        scanf("%s",&mergeFileName);
        mergeFile=fopen(mergeFileName,"w");
        if(mergeFile==NULL)
        {
                printf("Merge File Not Found\n");
                exit(0);
        }
        for(i=0; i<num; i++)
        {

                while(1)
                {
                        c=fgetc(file[i]);
                        if(c!=EOF)
                                fputc(c,mergeFile);
                        else
                                break;
                }
                fputs("\n--------------------------------------------\n",mergeFile);
                fclose(file[i]);

        }
        fclose(mergeFile);
        printf("All Files merged Successfully\n");
        return 0;
}
