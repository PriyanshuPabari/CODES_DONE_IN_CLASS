//3. WAP TO DISPLAY ALL THE PRIME NUMBERS BETWEEN 1 TO 20

#include <stdio.h>
int main ()
{
   int i;
   printf("1,2,3,");
   for(i=4;i<=20;i++)
   {
    if(i%2!=0)
    {
        if(i%3!=0)
        {
            printf("%d,",i);
        }
    }
   }
   return 0;
}