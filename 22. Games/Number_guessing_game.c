#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, n, num, flag=1, guess, count=0;
    num = rand() % 50 + 1;
    printf("Guess the number between 1 to 50\n");
    scanf("%d",&guess);
    do
    {
        if(num==guess)
            flag=0;
        else if(guess<num)
        {
            flag=1;
            printf("Your guess is lower than the number\n");
            count++;
        }
        else
        {
            flag=1;
            printf("Your guess is greater than the number\n");
            count++;
        }

        if(flag==1)
        {
            printf("Sorry! Please guess it again\n");
            scanf("%d",&guess);
        }
    }
    while(flag);

    printf("Congrats! You guessed the number %d\n",num);
    printf("Number of trails: %d\n",count);
    return 0;
}

