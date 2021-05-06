#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10],s3[10];
    printf("Enter String 1\n");
    gets(s1);
    printf("Enter String 2\n");
    gets(s2);
    printf("Before Swapping\n");
    printf("String 1 : %s\n",s1);
    printf("String 2 : %s\n",s2);
    strcpy(s3,s1);
    strcpy(s1,s2);
    strcpy(s2,s3);
    printf("After Swapping:\n");
    printf("String 1 : %s\n",s1);
    printf("String 2 : %s\n",s2);
    return 0;
}
