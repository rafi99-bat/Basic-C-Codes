#include <stdio.h>
#include <time.h>
int main ()
{
        FILE *file;
        int a[100], i=0, k=0, j=0, count=0, lucky;
        char c, str[100][50];
        srand (time(NULL));
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
                        fflush(stdin);
                        if(c!='\n')
                        {
                                str[k][j]=c;
                                j++;
                        }
                        if(c=='\n')
                        {
                                k++;
                                j=0;
                        }
                        if(c==EOF)
                                break;
                }
        }
        fclose(file);
        printf("Total people in the list = %d\n",k);
        lucky = rand() % (k);

        printf("People in the list are\n");
        for(i=0; i<k; i++)
                printf("%s\n",str[i]);
        for(i=0; i<k; i++)
        {
                if(lucky==i)
                {
                        printf("\nBut Todays Lucky Winner is\n");
                        printf("%s\n", str[i]);
                }
        }
        return 0;
}
