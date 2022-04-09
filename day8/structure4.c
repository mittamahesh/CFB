/*intializing structures */

#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};
void main(){
    int a = 45;
    struct employee mahesh = {100025700, 5.7, "mahesh"};

    printf("The name of Mahesh is %s\n", mahesh.name);
    printf("The salary of Mahesh is %d\n", mahesh.salary);
    printf("The hike of Mahesh is %f\n", mahesh.hike);
}