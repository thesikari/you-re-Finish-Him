#include<stdio.h>
#include<conio.h>
int main()
{
    int x,a,b,i,HCF;
    printf("Enter the two Numbers for their HCF\n");
    scanf("%d %d",&a,&b);
    x=a<b?a:b;
    for(i=1;i<=x;i++)
    {
        if(a%i==0&&b%i==0)
        {
            HCF=i;
        }
    }
    printf("HCF of %d and %d is %d",a,b,HCF);
    getch();
    return 0;
}