#include<stdio.h>
void main()
{
    FILE *ptr;
    ptr=fopen("newfile1.txt","r");
    int i;
    fscanf(ptr,"%d",&i);
    printf("The value is %d", i);
}