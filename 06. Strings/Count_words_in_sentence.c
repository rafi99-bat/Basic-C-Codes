#include <stdio.h>
int countWords(char *str)
{
    int state = 0;
    int count = 0;

    while (*str)
    {
        if (*str == ' ' || *str == '\n' || *str == '\t')
            state = 0;
        else if (state == 0)
        {
            state = 1;
            count++;
        }
        ++str;
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter a string\n");
    scanf("%[^\n]s", &str);
    printf("No of words : %u", countWords(str));
    return 0;
}
