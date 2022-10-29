#include<stdio.h>
#include<conio.h>
int main()
{
    int Prev,Cur,Next,N,i;
    printf("Enter a Number to check whether a given Number is there in Fibonacci Series or Not\n");
    scanf("%d",&N);
    for(Prev=-1,Cur=1,i=1;1;i++)
    {
        Next=Prev + Cur;
        if(Next==N)
            break;
        if(Next>N)
            break;
        Prev = Cur;
        Cur = Next;
    }
    if(Next==N)
        printf("yes,It's Belongs to Fibonacci series");
    if(Next>N)
        printf("No,It's Belongs to Fibonacci series");
    getch();
    return 0;
}    