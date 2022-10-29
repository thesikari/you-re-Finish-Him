#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a Character\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("Lower Case");
    else
        if(ch>='A' && ch<='Z')
            printf("Upper Case");
        else
            if(ch>='0' && ch<='9')
                printf("Digit");
            else
                printf("Special Character");
        getch();
        return 0;
}
