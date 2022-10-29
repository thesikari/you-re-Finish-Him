#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number for divisibility Check\n");
    scanf("%d",&x);
    if(x%5)
        printf("Not Divisible");
    else
        printf("Divisible");
    getch();
    return 0;
}
