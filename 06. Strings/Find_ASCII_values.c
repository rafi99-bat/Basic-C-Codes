#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[100];
    printf("Enter a string to find ascii values of each letter\n");
    gets(str);
    for(i=0; i<strlen(str); i++)
        printf("%c\t=\t%d\n",str[i],str[i]);
    return 0;
}
