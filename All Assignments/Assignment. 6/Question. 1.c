#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x,S;
    printf("Enter a NUmber\n");
    scanf("%d",&x);
    for(i=1,S=0;i<=x;i++)
        S=S+i;
    printf("\nSum of all %d First Naturals Numbers is %d",x,S);
    getch();
    return 0;
}
