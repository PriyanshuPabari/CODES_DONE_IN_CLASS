#include <stdio.h>

int main()
{
    int num[5], i, other[5], r = 0, n = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Enter second array number %d: ", i + 1);
        scanf("%d", &other[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (num[i] == other[i])
        {
            r = 1;
        }
        else
        {
            n = 1;
        }
    }
    if (r == 1 && n == 0)
    {
        printf("Both Arrays are Equal");
    }
    else
    {
        printf("Both Arrays are not Equal");
    }
    return 0;
}
