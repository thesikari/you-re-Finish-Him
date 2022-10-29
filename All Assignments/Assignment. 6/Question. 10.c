#include<stdio.h>
#include<conio.h>
int main()
{
    int N,SN,RN,i,j; // N for Number, SN for Stored Number, RN for Reverse Number and i and j for making loops
    printf("Enter a Number for Reverse\n");
    scanf("%d",&N);
    SN=N;
    for(i=1; ;i++)
    {
        N=N/10;
        if(N==0)
            break;
    }
    N=SN;
    for(j=1,RN=0;j<=i;j++)
    {
        SN=N%10;
        RN=RN*10+SN;
        N=N/10;
    }
    printf("Your Reverse Number is %d",RN);
    getch();
    return 0;
}