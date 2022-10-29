#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the three number for check\n");
    scanf("%d%d",&a,&b);
   if(a>b)
    printf("%d is greater number",a);
   else
    printf("%d is greater Number",b);
    getch();
    return 0;
}
