#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10],temp[10];
    int i;
    printf("Enter String 1\n");
    gets(s1);
    printf("Enter String 2\n");
    gets(s2);
    printf("Before Swapping\n");
    printf("String 1 : %s\n",s1);
    printf("String 2 : %s\n",s2);

    for(i=0; s1[i]!='\0'; i++)
        temp[i]=s1[i];
    temp[i]='\0';
    for(i=0; s2[i]!='\0'; i++)
        s1[i]=s2[i];
    s1[i]='\0';
    for(i=0; temp[i]!='\0'; i++)
        s2[i]=temp[i];
    s2[i]='\0';

    printf("After Swapping:\n");
    printf("String 1 : %s\n",s1);
    printf("String 2 : %s\n",s2);
    return 0;
}
