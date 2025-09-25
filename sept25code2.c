// write a program to count the total no of alphabets , digits and special character in a string

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;
    int alph = 0, dig = 0, spcl = 0;

    printf("Enter a string to count : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            alph++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            dig++;
        }
        else if (str[i] != '\n')
        {
            spcl++;
        }
        i++;
    }
    printf("Total alphabets in the sentence are: %d\n", alph);
    printf("Total digits in the sentence are: %d\n", dig);
    printf("Total special characters in the sentence are: %d\n", spcl);
    return 0;
}