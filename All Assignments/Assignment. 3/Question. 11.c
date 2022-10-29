#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,S;
    printf("Enter yours subjects numbers out of 100\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    S=a+b+c+d+e;
    if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
    {
        if(S>=300)
        {
            printf("1st Division");
        }
        else
        {
            if(S>=250)
            {
                printf("2nd Division");
            }
            else
            {
                if(S>=200)
                {
                    printf("3rd Division");
                }
                else
                {
                    if(S>=165)
                    {
                        printf("4th Division");
                    }
                    else
                    {
                        printf("Nothing");
                    }
                }
            }
        }

    }
    else
    {
        printf("Failed");
    }
    return 0;
}
