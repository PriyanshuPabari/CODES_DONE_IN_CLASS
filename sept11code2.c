// wap to accept 8 numbers from user and find the sum of all elements of the array

#include <stdio.h>
int main()
{
    int num[8];
    int sum = 0;
    printf("Enter 8 numbers:\n");

    for (int i=0; i<8; i++)
    {
        printf("Numbers %d: ", i+1);
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}