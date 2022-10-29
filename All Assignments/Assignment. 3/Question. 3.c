#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a Number for Divisibility Check\n");
    scanf("%d",&x);
    if(x%2)
        printf("Odd");
    else
        printf("Even");
    getch();
    return 0;
}
