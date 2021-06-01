#include<stdio.h>
#include<string.h>

char* reverseString(char str[])
{
    static int i=0;
    static char revstr[100];
    if(*str)
    {
         reverseString(str+1);//calling the function ReverseOfString itself
         revstr[i++] = *str;
    }
    return revstr;
}

int main()
{
    char str1[100]={0}, *str2;
    printf("Enter a string to know whether it is palindrome or not\n");
    scanf("%[^\n]s", &str1);
    
    str2 = reverseString(str1);

    printf("The reverse of the given string is---> %s\n",str2);
    if(strcmp(str1,str2)==0)
        printf("The given string is Palindrome\n");
    else
        printf("The given string is Not Palindrome\n");

    return 0;
}
