#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char c,str[100];
    printf("Enter a sentence\n");
    scanf("%[^\n]s", &str);
    fflush(stdin);
    printf("Enter a character to know its repeatation in sentence\n");
    scanf("%c",&c);

    for(i=0; i<strlen(str); i++)
    {
        if(str[i]==c)
            count++;
    }
    printf("Letter %c repeated %d times\n",c,count);
    return 0;
}
