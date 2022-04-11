#include<stdio.h>

void main(){
    char n1[12];
    int sal1;
    char n2[12];
    int sal2;
    FILE *ptr;
    printf("Enter the value of salary 1\n");
    scanf("%d", &sal1);
    printf("Enter the value of name 1\n");
    scanf("%s", n1);
    printf("Enter the value of salary 2\n");
    scanf("%d", &sal2);
    printf("Enter the value of name 2\n");
    scanf("%s", n2);
    ptr = fopen("employee.txt", "w");  
    fprintf(ptr, "%s, %d\n", n1, sal1);  
    fprintf(ptr, "%s, %d", n2, sal2);  
}