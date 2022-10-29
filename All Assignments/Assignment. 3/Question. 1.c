#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a Number for Check\n");
    scanf("%d",&x);
    if(x>0)
        printf("Positive");
    else
        printf("Non-Positive");
    printf("...Okay");
    getch();
    return 0;
}
