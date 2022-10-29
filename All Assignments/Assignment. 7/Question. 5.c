#include<stdio.h>
#include<conio.h>
int main()
{
    int x,a,b,i,HCF;
    printf("Enter the two Numbers to check wether two given numbers are co-prime Numbers or not\n");
    scanf("%d %d",&a,&b);
    x=a<b?a:b;
    for(i=1;i<=x;i++)
    {
        if(a%i==0 && b%i==0)
        {
            HCF=i;
        }
    }
    if(HCF==1)
        printf("Co-Prime Numbers");
    else
        printf("Not Co-Prime");
    getch();
    return 0;
}