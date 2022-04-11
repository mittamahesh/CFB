#include<stdio.h>
void main()
{
    FILE *ptr;
    ptr=fopen("newfile1.txt","w");
    int i=123456;
    fprintf(ptr,"%d",i);
    fclose(ptr);

}