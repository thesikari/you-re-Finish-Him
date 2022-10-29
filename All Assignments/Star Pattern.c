#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        for(j=1,k='A';j<=5;j++)
        {
            if(j>=i)
                printf("%c",k++);
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
