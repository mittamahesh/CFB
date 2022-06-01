#include<stdio.h>
void main()
{
    int n,f=1;
    printf("enter n value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    printf("%d",f);
}