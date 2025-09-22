#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
void checkEO(int num)
{
    if (num % 2 == 0)
    printf("The sum %d is Even.", num);
    else
    printf("The sum %d is Odd.", num);
}
int main()
{
    int x, y, result;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    result = sum(x, y);
    checkEO(result);
    return 0;
}