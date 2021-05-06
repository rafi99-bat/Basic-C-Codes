#include<stdio.h>
int main()
{
    int i;
    printf("Enter a Number\n");
    scanf("%d",&i);
    if(i%2==0)
        printf("The number %d is Even",i);
    else
        printf("The number %d is Odd",i);
    printf("\n");
    return 0;
}
