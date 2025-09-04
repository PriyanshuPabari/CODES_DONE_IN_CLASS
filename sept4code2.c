// 2. WAP TO ACCEPT A NUMBER FROM A USER AND CHECK WEATHER THE NUMBER IS PRESENT IN THE FIBONACCI SERIES EXECUTED FOR 13 NUMBERS

#include <stdio.h>
int main ()
{ 
    int n;
    printf("enter first number: ");
    scanf("%d", &n);

    int n1=0,n2=1,n3,i;
    if (n==n1 || n==n2)
    {
        printf("it is present in series");
    }
   else{
    for (i=2;i<=13;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        if(n==n3)
        {
            printf("it is present in series ");
        }
    }
   }
   return 0;
}