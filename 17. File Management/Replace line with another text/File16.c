#include <stdio.h>
#include <string.h>

#define MAX 256

int main()
{
        FILE *file1, *file2;
        int lno, linectr = 0;
        char str[MAX],fname[MAX];
        char newln[MAX], temp[] = "temp.txt";

        printf(" Input the file name to be opened : ");
        fgets(fname, MAX, stdin);
        fname[strlen(fname) - 1] = '\0';
        file1 = fopen(fname, "r");
        if (!file1)
        {
                printf("Unable to open the input file!!\n");
                return 0;
        }
        file2 = fopen(temp, "w");
        if (!file2)
        {
                printf("Unable to open a temporary file to write!!\n");
                fclose(file1);
                return 0;
        }
        printf(" Input the content of the new line : ");
        fgets(newln, MAX, stdin);
        printf(" Input the line no you want to replace : ");
        scanf("%d", &lno);
        lno++;
        while (!feof(file1))
        {
                strcpy(str, "\0");
                fgets(str, MAX, file1);
                if (!feof(file1))
                {
                        linectr++;
                        if (linectr != lno)
                        {
                                fprintf(file2, "%s", str);
                        }
                        else
                        {
                                fprintf(file2, "%s", newln);
                        }
                }
        }
        fclose(file1);
        fclose(file2);
        remove(fname);
        rename(temp, fname);
        printf(" Replacement did successfully..!! \n");
        return 0;
}
