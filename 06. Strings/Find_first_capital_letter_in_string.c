#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[100],c;
    printf("Enter a string\n");
    gets(str);

    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            c=str[i];
            break;
        }
        else
            continue;
    }
    printf("First capital letter of string %s is %c\n",str,c);
    return 0;
}
