#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number to print its unit digit\n");
    scanf("%d",&x);
    printf("Unit digit of Your Number is %d",x%10);
    getch();
    return 0;
}
