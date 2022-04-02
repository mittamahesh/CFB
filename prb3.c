#include<stdio.h>
void main()
{
    int income;
    float tax=0;
    printf(" enter you income:");
    scanf("%d",&income);
    if(income<250000)
    {
        printf("No tax for you:");
    }
    else if(income>250000 && income<500000)
        {
            printf(" your income is in between 2.5L and 5L");
            tax=tax+0.05*(income-250000);
        }
        else if(income>500000 && income<1000000)
        {
            printf("your income is in between 5L and 10L");
            tax=tax+tax+0.05*(500000-250000);
            tax=tax+0.2*(income-250000);
                    }
        else
        {
            printf(" your income is above 10L:");
            tax=tax+tax+0.05*(500000-250000);
            tax=tax+0.2*(income-500000);
            tax=tax+0.3*(income-1000000);
        }
        printf("tax for you is %f",tax);
}