#include <stdio.h>

int i;

int checkPrime(int n1)
{
    if(i == 1)
    {
        return 1;
    }
    else if(n1 % i == 0)
    {
        return 0;
    }     
    else
        {
            i = i -1; 
            checkPrime(n1);
        }
}

int main()
{

    int n1, prime;

    printf("Input any positive number : ");
    scanf("%d", &n1);
    
    i = n1 / 2;

    prime = checkPrime(n1);

   if(prime == 1)
        printf(" The number %d is a prime number.", n1);
   else
        printf(" The number %d is not a prime number.", n1);

   return 0;
}
