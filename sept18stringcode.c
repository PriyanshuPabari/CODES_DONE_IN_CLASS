#include <stdio.h>

int main() 
{
    char str[10];
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'e' || str[i] == 'E') 
        {
            count++;
        }
    }
    printf("the number of 'e's in the string is: %d\n", count);
    return 0;
}