#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character to print its ASSCI Value\n");
    scanf("%c",&c);
    printf("%d is the ASSCI value of %c",c,c);
    getch();
    return 0;
}

