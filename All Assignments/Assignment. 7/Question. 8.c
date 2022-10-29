#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,j;
    printf("Enter a Number to find their Next Prime Number\n");
    scanf("%d",&x);
    printf("Prime Number after The given Number\n");
    for(i=x+1; ;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
                break;
        }
        if(j>i/2)
        {
            printf("%d",i);
                break;
        }
    }
    getch();
    return 0;
}                  