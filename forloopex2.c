#include <stdio.h>
int main()
    {

    int n1;
    printf("enter first number %d", n1);
    scanf("%d",& n1);

    int n2;
    printf("enter second number %d", n2);
    scanf("%d",& n2);

    int i;
    for(i=n1; i<=n2; i++);
    {
        if (i%2!= 0)
            printf("%d", i);
        }
        return 0;
    }