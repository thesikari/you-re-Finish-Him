#include<stdio.h>
#include<conio.h>
int main()
{
    int Prev,Cur,Next,N,i;
    printf("Enter the Nth terms of Fibbonic Series\n");
    scanf("%d",&N);
    for(Prev=-1,Cur=1,i=1;i<=N;i++)
    {
        Next=Prev + Cur;
        Prev = Cur;
        Cur = Next;
    }
    printf("Nth term is %d",Next);
}