#include <stdio.h>

int main()
{
    int n, i;
    int sumeven = 0, sumodd = 0;
    printf("enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        for (i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                sumeven = sumeven + arr[i];
            }
            else
            {
                sumodd = sumodd + arr[i];
            }
        }
        printf("Sum of even numbers: %d\n", sumeven);
        printf("Sum of odd numbers: %d\n", sumodd);

        return 0;
    }
}