#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter a Year to check leap year or not\n");
    scanf("%d",&year);
    if(year%400==0)
        printf("Leap Year\n");
    else
        if(year%4==0)
            printf("Leap Year\n");
        else
            printf("Not Leap Year\n");
    getch();
    return 0;
}
