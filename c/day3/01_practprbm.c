#include<stdio.h>
void main()
{
    int n;
    printf("enter table number to print");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%dx1=%d\n",n,n*i);
    }
}