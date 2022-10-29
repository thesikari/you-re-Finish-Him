#include<stdio.h>
int main()
{
    {
        int x,count=0;
        printf("Enter a Number to find first 1 in Least significant bit\n");
        scanf("%d",&x);
        while(x)
        {
            count++;
            if(x&1)
            {
                printf("%d Postion",count);
                break;
            }
            x=x>>1;
        }
        return 0;
    }
}
