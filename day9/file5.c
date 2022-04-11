#include<stdio.h>
void main()
{
    FILE *ptr;
    ptr=fopen("newfile1.txt","r");
    char ch;
    ch=fgetc(ptr);
    printf("the character is %c",ch);
}