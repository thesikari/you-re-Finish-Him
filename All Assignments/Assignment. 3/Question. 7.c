#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the coefficients of quardatic equation and its constant\n");
    scanf("%d%d%d",&a,&b,&c);
    if(b*b-4*a*c==0)
        printf("Disinct and Real");
    else
    {
        if(b*b-4*a*c>0)
            printf("Real");
        else
            printf("Imaginary");
    }
    getch();
    return 0;
}
