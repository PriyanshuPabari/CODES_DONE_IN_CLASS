//1. WAP TO ACCEPT 2 NO.S FROM A USER AND DISPLAY THE SQAURES OF EVEN NUMBER AND CUBES OF ODD NUMBERS IN THAT RANGE

#include <stdio.h>
int main()
{
    int n1,n2;
    printf("enter first number: ");
    scanf("%d", &n1);
    printf("enter second number: ");
    scanf ("%d",&n2);
    
    int odd,even, square, cube;
    for(int i=n1; i<=n2; i++)
    {
        if (i%2==0)
        {
            even=i;
            square=(even*even);
            printf("%d,",square);
        }
        else
        {
          odd=i;
          cube=(odd*odd*odd);
          printf("%d,",cube);
        }

        }
        return 0;
    }