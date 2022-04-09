/* typedef keyword*/

#include<stdio.h>
#include<string.h>

typedef struct employee {
    int salary;
    float hike;
    char name[10];
} emp;

void main(){
    int a = 45;
    emp mahesh = {34, 5.2, "Mahesh"};
    emp *ptr = &mahesh;
    printf("The name of Mahesh is %s\n", mahesh.name);
    printf("The salary of Mahesh is %d\n", mahesh.salary);
    printf("The hike of Mahesh is %f\n", mahesh.hike);

    printf("The name of Mahesh is %s\n", (*ptr).name);
    printf("The salary of Mahesh is %d\n", (*ptr).salary);
    printf("The hike of Mahesh is %f\n", (*ptr).hike);
}