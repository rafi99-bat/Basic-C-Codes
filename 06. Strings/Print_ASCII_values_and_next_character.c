#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    printf("The ASCII value of %c is %d\n",c,c);
    if((c+1)>127 && (c+1)<0)
        printf("There is no next character after %c\nFor reference check ASCII Sheet\n",c);
    else
        printf("The character after %c is %c\n",c,c+1);
    return 0;
}
