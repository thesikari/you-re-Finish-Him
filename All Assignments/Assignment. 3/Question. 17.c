#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the lengths of sides of a triangle\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b)
        printf("Valid Triangle\n");
    else
        printf("Not Valid");
    getch();
    return 0;
}
