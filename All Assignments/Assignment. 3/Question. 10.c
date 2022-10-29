#include<stdio.h>
#include<conio.h>
int main()
{
    float c,s,PnLp;//PnLp = Profit and Loss Percentage
    printf("Enter Cost price and Selling price of your product\n");
    scanf("%f %f",&c ,&s);
    PnLp=(s-c)/c*100; // in case of loss, loss percentage comes in negative
    if(s>c)
        printf("Profit percentage %f%%",PnLp);
    else
        //So,here multiply -1 into PnLp
        printf("Loss Percentage %f%%",PnLp*-1);
    getch();
    return 0;
}
