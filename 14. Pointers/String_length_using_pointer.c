#include <stdio.h>
int main()
{
        char s[25], *t;
        int len=0;
        printf("Enter a string\n");
        scanf("%s",&s);
        t=s;
        while(*t!='\0')
        {
                len++;
                t++;
        }
        printf("length of string is %d\n",len);
        return 0;
}
