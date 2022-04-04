#include<stdio.h>
void main()
{
    int i=0;
    while (i<=10)
    {
        if(i==5)
        {
            break;
        }
        printf("the value of i is %d\n",i);
        i++;
    }
}