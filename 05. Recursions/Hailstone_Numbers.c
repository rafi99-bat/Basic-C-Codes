/**
 Hailstone Numbers
 Start with any positive integer (an initial seed) and obtain a sequence of numbers by following these rules.
    1. If the current number is even, divide it by two; else if it is odd, multiply it by three and add one. 
    2. Repeat.

 For instance, here is the Hailstone series generated from starting value 17:
    17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1
 If a Hailstone series ever reaches the value 1, then the next value generated is 4, the next is 2, and the next is 1 again.
 Thus, when a Hailstone series reaches 1, then it has converged in the sense that the rest of the series is 4, 2, 1, 4, 2, 1,....
*/

#include <stdio.h>

    int getNextValue(int aNum)
    {
        int i = aNum;
        if (i % 2 == 0)
            i = i / 2;
        else 
            i = 3 * i + 1;
        return (i);
    }

    void getHailstone(int aNum)
    {
        int hlSe = aNum;  
        if (hlSe == 1)
            printf("%i ", hlSe);
        else
        {
            printf(" %i ", hlSe);
            getHailstone(getNextValue(hlSe));
        }
    }

    int countLength(int aNum)
    {
        int hlSe = aNum;  
        if(hlSe == 1)
            return 1;
        return 1 + countLength(getNextValue(hlSe));
    }

int main(int argu)
{
    int aNum;
  
    printf("Input any number (positive) to start for Hailstone Sequence : ");
    scanf("%i", &aNum);

    printf("The hailstone sequence starting at %i is :\n", aNum);
    getHailstone(aNum);
    printf("The length of the sequence is %i.", countLength(aNum));

    return 0;
}