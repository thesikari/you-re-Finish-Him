#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a Number\n");
    scanf("%d",&x);
    if(x)
        if(x>0)
            printf("Positive");
        else
            printf("Negative");
    else
        printf("Zero");
    getch();
    return 0;
}
