#include<stdio.h>
void main()
{
    int age;
    printf("enter age :");
    scanf("%d",&age);
    switch (age)
    {
    case 54:
        printf(" you are 54:");
        break;
    case 4:
        printf(" you are 4:");
        break;
    
    case 5:
        printf(" you are 5:");
        break;
    
    case 20:
        printf(" you are 20:");
        break;
    
    case 25:
        printf(" you are 25:");
        break;
    
    case 30:
        printf(" you are 30:");
        break;
    
    
    default:
        printf("no case match:");
        break;
    }
}