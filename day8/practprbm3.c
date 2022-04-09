/*arrows operators in pointers*/

#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};

void main(){
    int a = 45;
    struct employee mahesh = {34, 5.2, "Mahesh"};
    struct employee *ptr = &mahesh;

    printf("The name of Mahesh is %s\n", ptr->name);
    printf("The salary of Mahesh is %d\n", ptr->salary);
    printf("The hike of Mahesh is %f\n", ptr->hike);
}