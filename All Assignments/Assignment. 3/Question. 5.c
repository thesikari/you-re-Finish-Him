#include<stdio.h>
#include<stdio.h>
int main()
{
    // 1111101001=> 999, 10 binary digits
    int x,count;
    printf("Enter a Number\n");
    scanf("%d",&x);
    if(x>=100&&x<=999)
        printf("Three Digits Number");
    else
        printf("Non-Three Digits Number");
    getch();
    return 0;
}
