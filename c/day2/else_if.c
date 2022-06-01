#include<stdio.h>
void main()
{
    int age=45;
    int placecode=12;
    if(age>18)
    {
        printf("you are eliglble for drive:");
    }
    else if(age>15)
    {
        printf("you not eligible to drive but we will check toy vehical for you");
    }
    else{
        printf("sorry you are kid and cannot drive:");
    }
}