/*N=12345

  12345
  2345
  345
  45
  5*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, firstDigit, digits, placeValue;

    printf("Enter any number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        printf("%d\n", num);

        digits = (int) log10(num);
        placeValue = (int) ceil(pow(10, digits));
        firstDigit = (int)(num / placeValue);

        num = num - (placeValue * firstDigit);
    }

    return 0;
}
