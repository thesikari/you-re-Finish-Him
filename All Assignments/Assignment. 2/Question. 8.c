#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number to check the number is even or odd\n");
    scanf("%d",&x);
    if(x&1)
        printf("Odd Number");
    else
        printf("Even Number");
    getch();
    return 0;
}
