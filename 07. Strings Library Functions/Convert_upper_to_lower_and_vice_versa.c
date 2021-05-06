#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i;
    char str1[100];
    printf("Enter a sentence to convert upper to lower and vice versa\n");
    gets(str1);
    for(i=0; i<strlen(str1); i++)
    {
        if(islower(str1[i]))
            printf("%c",toupper(str1[i]));
        else if(isupper(str1[i]))
            printf("%c",tolower(str1[i]));
        else
            printf("%c",str1[i]);
    }
    return 0;
}
