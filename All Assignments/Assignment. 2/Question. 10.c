#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Value\n");
    scanf("%d",&x);
    x=x-x%10;
    printf("Stored in x variable is %d",x);
}
