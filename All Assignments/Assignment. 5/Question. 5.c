#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x;
    printf("Enter a Number\n");
    scanf("%d",&x);
    for(i=x;i>=1;i--)
        printf(" %d",2*i-1);
    getch();
    return 0;
}


