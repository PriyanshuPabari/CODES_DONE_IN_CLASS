// wap to count the number of spaces in a file

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    ptr = fopen("C:\\Users\\Admin\\Desktop\\30thoctques.txt", "r");
    if (ptr == NULL)
    {
        printf("Error!.\n");
    }
    else
    {
        char ch;
        int spacecount = 0;
        while ((ch = fgetc(ptr)) != EOF)
        {
            if (ch == ' ')
            {
                spacecount++;
            }
        }
        printf("Number of spaces in the file: %d\n", spacecount);
        fclose(ptr);
    }
}