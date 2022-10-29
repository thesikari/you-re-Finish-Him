#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x;
    printf("Enter a Number\n");
    scanf("%d",&x);
    for(i=1;i<=2*x;i=i+2)
        printf(" %d",i);
    getch();
    return 0;
}



