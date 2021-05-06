#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,vowelcount=0;
    char str[100];
    printf("Enter a string\n");
    scanf("%[^\n]s", &str);
    while(str[i]!='\0')
    {
        if(str[i]=='A'||str[i]=='a'||str[i]=='e'||str[i]=='E'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
            vowelcount++;
        i++;
    }
    printf("%d\n",vowelcount);
    return 0;
}
