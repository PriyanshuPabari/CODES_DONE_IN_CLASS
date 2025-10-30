// WAP to open a file and check whether the file is empty or contain some text.

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
        char ch = fgetc(ptr);
        if (ch == EOF)
        {
            printf("file is empty\n");
        }
        else
        {
            printf("file is not empty\n");
        }
    }
    fclose(ptr);
    return 0;
}