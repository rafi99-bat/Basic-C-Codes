#include <stdio.h>
int main()
{
        char s[25], *t;
        printf("Enter a string\n");
        scanf("%s",&s);
        t=s;
        while(*t!='\0')
        {
                printf("%c",*t);
                t++;
        }
        printf("\n");
        return 0;
}
