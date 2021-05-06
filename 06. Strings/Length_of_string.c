#include<stdio.h>
int main()
{
    char str[100];
    int i=0, len=0;
    printf("Enter a string to know the length\n");
    scanf("%s",&str);
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    printf("The length of the string is %d\n",len);
    return 0;
}
