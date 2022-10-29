#include<stdio.h>
#include<conio.h>
int main()
{
    // 1. jan-31, 2. feb-28/29, 3. march-31, 4. aprail-30, 5. may-31, 6. june-30, 7. july-31, 8. aug-31, 9. sep-30, 10. oct-31, 11. nov-30, 12. dec-31

    int x;
    printf("Enter month number and find days of month\n");
    scanf("%d",&x);
    if(x==2)
        printf("Feb-28 Days/29 Days in leap year\n");
    else
        if(x==1)
            printf("Jan-31 Days\n");
        else
            if(x==3)
                printf("March-31 Days\n");
            else
                if(x==4)
                    printf("Aprail-30 Days\n");
                else
                    if(x==5)
                        printf("May-31 Days\n");
                    else
                        if(x==6)
                            printf("June-30 Days");
                        else
                            if(x==7)
                                printf("July-31 Days\n");
                            else
                                if(x==8)
                                    printf("August-31 Days\n");
                                else
                                    if(x==9)
                                        printf("September-30 Days\n");
                                    else
                                        if(x==10)
                                            printf("Octber-31 Days\n");
                                        else
                                            if(x==11)
                                                printf("Novmber-30 Days\n");
                                            else
                                                if(x==12)
                                                    printf("December-31 Days\n");
            getch();
            return 0;
}
