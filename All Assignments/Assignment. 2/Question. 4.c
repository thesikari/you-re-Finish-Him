#include<stdio.h>
int main()
    {
    int a,b;
    printf("enter the two values for swapping\n");
    scanf("%d%d",&a,&b);
    printf("Entered values of a is %d and b is %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of a and b after swapping is %d and %d respetively\n",a,b);
    getch();
    return 0;
    }
