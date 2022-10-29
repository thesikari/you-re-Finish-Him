#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    printf("Here All Prime Numbers Between 1 to 100\n");
    for(i=2;i<=100;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
                break;
        }
        if(j>i/2)
            printf("%d ",i);
    }
    getch();
    return 0;
}