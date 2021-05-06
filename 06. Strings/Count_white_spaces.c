#include<stdio.h>
#include<string.h>
int main()
{
    int i,spaces=0;
    char str[100];
    printf("Enter a sentence to know number of white spaces\n");
    scanf("%[^\n]s", str);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]==' ')
            spaces++;
    }
    printf("%d\n",spaces);
    return 0;
}
