#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x;
    printf("Enter a Number\n");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
        printf(" %d",i*i);
    getch();
    return 0;
}



