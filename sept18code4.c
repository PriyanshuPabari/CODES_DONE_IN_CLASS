// Find the pair of elements in an array whose sum is closest to zero.

#include <stdio.h>

int main()
{
    int num[5];
    int i;
    int sumofmin, a, b;

    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    sumofmin = num[0] + num[1];
    a = num[0];
    b = num[1];

    for (i = 1; i < 4; i++)
    {
        int s = num[i] + num[i + 1];

        if (s * s < sumofmin * sumofmin)
        {
            sumofmin = s;
            a = num[i];
            b = num[i + 1];
        }
    }

    printf("Pair closest to zero: %d and %d (sum = %d)", a, b, sumofmin);

    return 0;
}