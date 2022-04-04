#include<stdio.h>
void main()
{
    int n,isprime=1;
    printf("enter n value:");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
     if(isprime)
    {
    printf("it is prime");
    }
    else
    {
     printf("it is not a ");
    }
}