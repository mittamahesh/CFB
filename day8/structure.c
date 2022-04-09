#include<stdio.h>
#include<string.h>
struct employee
{
    int salary;
    float hike;
    char name[10];
};

void main()
{
    int a=10;
    struct  employee mahesh;
    strcpy(mahesh.name,"mahesh");
    mahesh.hike=5.0;
    mahesh.salary=150000;
    printf("the name of the demployee is %s\n", mahesh.name);
    printf("the salary of the employee is %d\n",mahesh.name);
    printf("the hike of the employee is %f\n", mahesh.hike);

}