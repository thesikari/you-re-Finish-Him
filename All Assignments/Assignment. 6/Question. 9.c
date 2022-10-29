#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,i;
    printf("Enter two numbers for their Lcm\n");
    scanf("%d %d",&x,&y);
    for(i=1;;i++)
    {
        if(i%x==0 && i%y==0)
            break;
    }
    printf("%d",i);
    getch();
    return 0;
}
