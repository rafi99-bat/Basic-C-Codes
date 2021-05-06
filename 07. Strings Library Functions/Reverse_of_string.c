#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string to get reverse of string\n");
    gets(str);
    printf("The reverse of the given string is---> %s\n",strrev(str));
    return 0;
}
