#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int len;
    printf("Enter a string to know the length\n");
    gets(str);
    len=strlen(str);
    printf("The length of %s is %d\n",str,len);
    return 0;
}
