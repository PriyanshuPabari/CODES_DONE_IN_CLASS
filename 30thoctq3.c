// wap to display the contents of file line by line

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *ptr;
    ptr = fopen("C:\\Users\\Admin\\Desktop\\30thoctques.txt", "r");
    if (ptr == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        char ch;
        while ((ch = fgetc(ptr)) != EOF)
        {
            putchar(ch);
        }
        fclose(ptr);
    }
    return 0;
}