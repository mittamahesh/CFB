#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};

int main(){
    int a = 45;
    struct employee mahesh = {34, 5.2, "mahesh"};
    struct employee *ptr = &mahesh;
    printf("The name of mahesh is %s\n", mahesh.name);
    printf("The salary of mahesh is %d\n", mahesh.salary);
    printf("The hike of mahesh is %f\n", mahesh.hike);

    printf("The name of mahesh is %s\n", (*ptr).name);
    printf("The salary of mahesh is %d\n", (*ptr).salary);
    printf("The hike of mahesh is %f\n", (*ptr).hike);

    return 0;
}