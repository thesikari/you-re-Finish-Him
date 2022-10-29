#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a Number\n");
    scanf("%d",&a);
    if(a%7==0||a%3==0)
        if(a%7==0)
            printf("Divisible by 7");
        else
            printf("Divisible by 3");
    else
        printf("Not Divisible");

}

