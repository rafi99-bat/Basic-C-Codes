#include<stdio.h>
#include<math.h>
int GetFactorial(int number)
{
  int factorial=1,i;
  for(i=1;i<=number;i++)
   factorial=factorial*i;
  return factorial;
}

void main()
{
  int num,i,j,temp,sum=0;;
  printf("Enter a number to know whether it is strong or not\n");
  scanf("%d",&num);
  temp=num;
  while(num>0)
  {
    i=num%10;
    sum+=GetFactorial(i);
    num=num/10;
  }
  if(sum==temp)
    printf("%d is a Strong number\n",temp);
  else
    printf("%d is not a Strong number since the sum of factorials of individual digits is %d\n",temp,sum);
}
