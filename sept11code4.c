// wap to count the number of duplicate elements of a array

#include <stdio.h>
int main()
{
    int arr[5], n, i, j, cnt = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cnt++;
                break;
            }
        }
    }
    printf("Number of duplicate elements = %d\n", cnt);
    return 0;
}
