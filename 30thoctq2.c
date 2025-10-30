// wap to read the contents of a file and display them in proper format

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("C:\\Users\\Admin\\Desktop\\30thoctques.txt", "r");
    if (ptr == NULL)
    {
        printf("Error!.\n");
        return 1;
    }

    printf("Contents:\n\n");

    while ((ch = fgetc(ptr)) != EOF)
    {
        putchar(ch);
    }

    fclose(ptr);

    return 0;
}
