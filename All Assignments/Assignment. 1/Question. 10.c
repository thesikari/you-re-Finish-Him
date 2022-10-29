#include<stdio.h>
int main()
{
    int a,b,c;
    char ch,bh;
    printf("Enter the day/month/year\n");
    scanf("%d%c%d%c%d",&a,&bh,&b,&ch,&c);
    printf("Day - %d , Month - %d , Year - %d",a,b,c);
    return 0;
}
