#include<stdio.h>
void main(){
    FILE *ptr;
    int i;
    ptr = fopen("newflie2.txt", "r");
    fscanf(ptr, "%d", &i);
    ptr = fopen("newfile2.txt", "w");
    fprintf(ptr, "%d", i*2);
    fclose(ptr);
}