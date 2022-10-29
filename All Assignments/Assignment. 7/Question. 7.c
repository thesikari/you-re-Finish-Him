#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,i,j,Greater, Smaller;
    printf("Enter two Numbers to print all Primes Numbers between them\n");
    scanf("%d %d",&x,&y);
    printf("Here All Prime Numbers Between %d to %d\n",x,y);
    Greater=x>y?x:y;
    Smaller=x<y?x:y;
    if(Smaller==1)
        Smaller=2;
    for(i=Smaller;i<=Greater;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
                break;
        }
        if(j>i/2)
            printf("%d ",i);
    }
    getch();
    return 0;
}