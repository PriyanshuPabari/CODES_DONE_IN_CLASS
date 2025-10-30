// WAP to count number of characters and words in a file.

#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("C:\\Users\\Admin\\Desktop\\30thoctques.txt", "r");
    if (ptr == NULL)
    {
        printf("File does not exist.\n");
    }
    else
    {
        char ch;
        int word, chr=0;
        while ((ch = fgetc(ptr)) != EOF)
        {
            chr++;
            if (ch == ' ' || ch == '\n')
            {
                word++;
            }
        }
        printf("Total number of characters are: %d \n", chr);
        printf("Total number of words are: %d", word + 1);
    }
    fclose(ptr);

    return 0;
}