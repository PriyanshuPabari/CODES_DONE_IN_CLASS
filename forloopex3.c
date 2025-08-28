#include<stdio.h>
int main()
{
    int i, cnt=0;
    int sum =0;
    for(i=10;i<=70;i++)
    {
        
        if(i%2!=0)
        {
            cnt=cnt+1;
            if(cnt<=12)
        {
            sum = sum+i;
            
        }
        
        }
        
    }
        printf("%d",sum);
    return 0;
}