#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x,count;
    printf("Enter a Digit\n");
    scanf("%d",&x);
    for(i=1;x;i++)
    {
        count=i;
        x=x/10;
    }
    printf("\n%d digits Number",count);
    getch();
    return 0;
}
