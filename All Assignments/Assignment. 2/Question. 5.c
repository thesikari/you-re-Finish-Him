#include<stdio.h>
int main()
{
    int a,rem,sum=0;
    printf("Enter the three numbers for their sum\n");
    scanf("%d",&a);
    rem=a%10;
    sum=sum+rem;

    a=a/10;
    rem=a%10;
    sum=sum+rem;

    a=a/10;
    rem=a%10;
    sum=sum+rem;
    a=a/10;
    printf("Sum of all three digits of number is %d\n",sum);
    getch();
    return 0;
}
