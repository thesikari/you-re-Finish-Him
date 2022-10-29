#include<stdio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter Time in this format\n");
    scanf("%d%c%d",&a,&c,&b);
    printf("%d Hour and %d Minute",a,b);
    getch();
}
