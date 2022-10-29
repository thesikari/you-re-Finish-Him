#include<stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    a=sizeof(a);
    printf("Size of int type variable is %d\n",a);
    getch();
    a=sizeof(b);
    printf("Size of float type variable is %d\n",a);
    getch();
    a=sizeof(c);
    printf("Size of char type variable is %d\n",a);
    getch();
    a=sizeof(d);
    printf("Size of double type variable is %d\n",a);
    getch();
    return 0;
}
