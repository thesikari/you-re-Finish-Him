#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a three digits number\n");
    scanf("%d",&x);
    x=x%10*100+x/10;
    printf("%d",x);
    getch();
    return 0;
}
