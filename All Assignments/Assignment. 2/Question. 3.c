#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the two value for swapping\n");
    scanf("%d%d",&a,&b);
    printf("Your values are a = %d and b = %d, Hit Enter for Swapping\n",a,b);
    getch();
    c=a;
    a=b;
    b=c;
    printf("After Swapping,Value of a is %d and value of b is %d",a,b);
    getch();
    return 0;
}
