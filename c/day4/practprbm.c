#include<stdio.h>
int max(int,int,int);
void main()
{
    int a=6,b=94,c=8;
    int m=max(a,b,c);
    printf("maximum value is %d",m);
}
int max(int a,int b,int c)
{
    if(a>b&&a>c)
        return a;
    else if(b>c&&b>a)
        return b;
    else 
        return c;
}

