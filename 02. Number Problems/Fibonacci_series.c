#include<stdio.h>
int main()
{
    int a=0,b=1,num,c,count;
    printf("Enter a number to obtain fibonacci series\n");
    scanf("%d",&num);
    printf("The series is\n");
    printf("%d \t%d\t",a,b);
    count=2;
    while(count<num)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
        count++;
    }
    return 0;
}
