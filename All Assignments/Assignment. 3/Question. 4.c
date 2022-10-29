#include<stdio.h>>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a Number for divisibility check\n");
    scanf("%d",&x);
    if(x&1)
        printf("Odd");
    else
        printf("Even");
    getch();
    return 0;
}
