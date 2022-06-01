#include<stdio.h>
void fun(int,int,int);
void main()
{
int a=5,b=6,c=56;
fun(a,b,c);
}
void fun(int a,int b,int c)
{
    printf("the value of A,B and C %d %d,%d",a,b,c);
}