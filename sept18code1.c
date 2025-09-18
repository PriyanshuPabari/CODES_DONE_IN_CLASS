#include <stdio.h>

int main()
{
    int a[5],i,j;
    printf("enter the array values\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",& a[i]);
    }
    printf("non duplicate elements\n");
    for(i=0;i<5;i++)
    { int duplicate=0;
        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
                duplicate=1;
                break;
            }
        }
    if(!duplicate)
    {
        printf(" %d",a[i]);
    }
}
 return 0;
}