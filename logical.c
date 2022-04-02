#include<stdio.h>
void main()
{
    int a=2,b=5,c=9;
    if(a>b && a>c)
    {
        printf("a is big\n");
    }
    if(b >a || b < c )
    {
        printf("b is big\n");
    }
    if(!(b>c))
    {
        printf("c is big");
    }
}