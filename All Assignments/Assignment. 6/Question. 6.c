#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x,S;
    printf("Enter a NUmber\n");
    scanf("%d",&x);
    for(i=1,S=1;i<=x;i++)
        S=S*i;
    printf("\nFactorial of %d is %d",x,S);
    getch();
    return 0;
}


