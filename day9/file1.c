#include<stdio.h>
void main()
{
    FILE *ptr;
    ptr=fopen("newfile1.txt","r");
    char ch;
    fscanf(ptr,"%c",&ch);
    printf("The character is is %c", ch);
}