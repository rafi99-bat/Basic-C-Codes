#include<stdio.h>
void main()
{
  int num, i, j, sum, digit, fact;
  printf("Enter an Integer: ");
  scanf("%d",&num);
  sum=0;

  for(i=num; i>0; i/=10)
  {
    digit=i%10;
    fact=1;
    for(j=1; j<=digit; j++)
      fact*=j;
    sum+=fact;
  }

  if(sum==num)
    printf("%d is strong Number.",num);
  else
    printf("%d is not a strong Number.",num);
}

