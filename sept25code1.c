// write a program to count the total no of words in a string
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, words = 0;

    printf("Enter a string to count the words : ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if ((str[i] == ' ' || str[i] == '\n') && (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\n'))
        {
            words++;
        }
        i++;
    }
    if (i > 1 && str[0] != ' ' && str[0] != '\n')
    {
        words++;
    }
    printf("Total number of words in the string is : %d\n", words);
    return 0;
}