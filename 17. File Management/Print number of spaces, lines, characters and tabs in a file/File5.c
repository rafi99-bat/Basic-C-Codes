#include<stdio.h>
#include<stdlib.h>
int main ()
 {
    FILE *file;
    char c;
    int tabs=0,lines=0,spaces=0,charcters=0;
    file=fopen("file123.txt","r");
    printf("The file contains the following data\n");
    printf("\n");
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
    file=fopen("file123.txt","r");
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
      if(c==' ')
      {
       spaces++;
      }
      if(c=='\n')
      {
       lines++;
      }
      if(c=='\t')
      {
       tabs++;
      }
      charcters++;
     }
    }
    fclose(file);

    printf("No of Charcters=%d\n",charcters);
    printf("No of Spaces=%d\n",spaces);
    printf("No of Lines=%d\n",lines);
    printf("No of Tabs=%d\n",tabs);
    return 0;
 }
