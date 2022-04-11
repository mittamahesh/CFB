#include<stdio.h>
void main()
{
    FILE *ptr;
    ptr=fopen("newfile1.txt","r");
    if(!ptr)
        printf("NULL \n");
    else
        printf("file present\n");
    int i;
    fscanf(ptr,"%d",&i);
    printf("The value is %d", i);
    fclose(ptr);
}