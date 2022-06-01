#include<stdio.h>
void main()
{
    int n;
    printf("enter the n value:");
    scanf("%d",&n);
    for(int i=n;i;i--)
    {
        printf("the value of i is %d\n",i);
    }
}