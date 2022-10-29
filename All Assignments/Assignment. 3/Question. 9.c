#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the three number for check\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("%d is greater Number",a);
        else
            printf("%d",c);
    }
    else
    {
        if(b>c)
            printf("%d is greater number",b);
        else
            printf("%d is greater Number",c);
    }
    getch();
    return 0;
}
