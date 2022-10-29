#include<stdio.h>
int main()
{
    int x,d;
    printf("Enter a Number and a digit\n");
    scanf("%d%d",&x,&d);
    x=x*10+d;
    printf("Your derived number is %d\n",x);
    getch();
    return 0;
}
