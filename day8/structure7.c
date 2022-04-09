/*pointers to functions*/

#include<stdio.h>
struct employee {
    int salary;
    float hike;
    char name[10];
};
void show(struct employee e){
    e.name[0] = 'P';
    printf("The name of Employee is %s\n", e.name);
    printf("The salary of Employee is %d\n", e.salary);
    printf("The hike of Employee is %f\n", e.hike);
    e.hike = 4.55;
}
void showRef(struct employee *e){
    (*e).name[0] = 'P';
    printf("The name of Employee is %s\n", e->name);
    printf("The salary of Employee is %d\n", e->salary);
    printf("The hike of Employee is %f\n", e->hike);
    (*e).hike = 4.55;
}
int main(){
    struct employee mahesh = {34, 5.2, "Mahesh"};
    showRef(&mahesh);
    printf("The name of Employee is %s\n", mahesh.name);
    printf("The salary of Employee is %d\n", mahesh.salary);
    printf("The hike of Employee is %f\n", mahesh.hike);
    return 0;
}