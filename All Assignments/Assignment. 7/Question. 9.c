
#include<stdio.h>
#include<conio.h>
int main()
{
    int Num,StoreNum,digit,Arm; //Armstrong Number
    printf("Enter a Number for Check, is it Armstrong Number or not\n");
    scanf("%d",&Num);
    StoreNum=Num;
        for( Arm=0 ; Num==0 ; )
        {
            digit=Num%10;
            Num=Num/10;
            Arm = Arm + digit*digit*digit;
        }
        if(Arm==StoreNum)
            printf("It is an Armstrong Number\n");
         if(Arm!=StoreNum)
            printf("It is not an Armstrong Number\n");
    getch();
    return 0;
}
