/*N=12345

  12345
  1234
  123
  12
  1*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        printf("%d\n", num);
        num = num / 10;
    }

    return 0;
}
