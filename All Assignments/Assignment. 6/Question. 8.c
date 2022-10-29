#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x,c;
    printf("Enter a Number\n");
    scanf("%d",&x);
    for(i=2;i<=x/2;i++)
        {
            c=x%i;
            if(c==0)
               break;
        }
            if(c==0)
                printf("Not-Prime Number");
            if(i>x/2)
                printf("Prime Number");
    getch();
    return 0;
}
