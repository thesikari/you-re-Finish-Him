#include<stdio.h>
int main()
{
    //1usd=76.23INR, SO 1INR=1/76.23USD
    double x;
    printf("Enter the Amount in rupees to convert in USD\n");
    scanf("%lf",&x);
    x=x*1/76.23;
    printf("Converted Amount of rupees into dollor is %lf $\n",x);
    getch();
    return 0;
}
