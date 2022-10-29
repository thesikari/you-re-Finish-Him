#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a Character\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("Lower Case\n");
    else
    {
     if(ch>='A' && ch<='Z')
     printf("Upper Case\n");
     else
        printf("Not Alphabet\n");
    }
    getch();
    return 0;
}
