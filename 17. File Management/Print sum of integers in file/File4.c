#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
        FILE *file;
        int num[100],i=0,sum=0;
        file=fopen("file4sum.txt","r");

        if(file==NULL)
        {
                printf("File Not Found\n");
                exit(0);
        }
        else
        {
                while(fscanf(file,"%d",&num[i])!=EOF)
                        i++;
        }

        for(i=0; i<10; i++)
                sum+=num[i];
        printf("Sum=%d\n",sum);
        fclose(file);
        return 0;
}
