#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a Number\n");
    scanf("%d",&a);
    if(a%2==0&&a%3==0)
    printf("%d Divisible by both 2 and 3",a);
    else
        printf("Not Divisible");

}

