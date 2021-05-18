#include <stdio.h>
int main()
{
        FILE *file;
        char c;
        file = fopen(__FILE__,"r");
        do
        {
                c = getc(file);
                printf("%c",c);
        }while (c != EOF);
        fclose(file);
        printf("\n");
        return 0;
}
