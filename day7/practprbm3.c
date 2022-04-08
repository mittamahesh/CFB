#include<stdio.h>

void main(){
    char name[] = "mahesh";
    for (int i = 0; i < 5; i++)
    {
        name[i] ++;
    }
    printf("The string is %s", name);
    
}