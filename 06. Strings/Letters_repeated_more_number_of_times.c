#include<stdio.h>
#include<string.h>
int main()
{
    int i,k=0,count[26]= {0},x;
    char str1[100];
    printf("Enter a sentence\n");
    gets(str1);

    while(str1[k]!='\0')
    {
        if(str1[k]>='a'&&str1[k]<='z')
        {
            x=str1[k]-'a';
            count[x]++;
        }
        if(str1[k]>='A'&&str1[k]<='Z')
        {
            x=str1[k]-'A';
            count[x]++;
        }
        k++;
    }
    int max=count[0];
    for(i=0; i<26; i++)
    {
        if(count[i]>max)
            max=count[i];
    }
    printf("Letters which are repeated more number of times\n");
    for(i=0; i<26; i++)
    {
        if(count[i]==max && count[i]!=0)
            printf("%c occured %d times\n",i+'a',count[i]);
    }
    return 0;
}
