/*arrays to pointers*/

#include<stdio.h>
#include<string.h>

struct employee {
    int salary;
    float hike;
    char name[10];
};

void main(){
    int a = 45;
    struct employee facebook[3];
    printf("Enter the details for mahesh\n");
    printf("Enter name for mahesh\n");
    scanf("%s", facebook[0].name);
    printf("Enter salary for mahesh\n");
    scanf("%d", &facebook[0].salary);
    printf("Enter hike for mahesh\n");
    scanf("%f", &facebook[0].hike);


    printf("Enter the details for girish\n");
    printf("Enter name for girish\n");
    scanf("%s", facebook[2].name);
    printf("Enter salary for girish\n");
    scanf("%d", &facebook[2].salary);
    printf("Enter hike for girish\n");
    scanf("%f", &facebook[2].hike);


    printf("Enter the details for balaji\n");
    printf("Enter name for balaji\n");
    scanf("%s", facebook[1].name);
    printf("Enter salary for balaji\n");
    scanf("%d", &facebook[1].salary);
    printf("Enter hike for balaji\n");
    scanf("%f", &facebook[1].hike);

    
    printf("The name of Harry is %s\n", facebook[0].name);
    printf("The salary of Harry is %d\n", facebook[0].salary);
    printf("The hike of Harry is %f\n", facebook[0].hike);

    printf("The name of Rohan is %s\n", facebook[2].name);
    printf("The salary of Rohan is %d\n", facebook[2].salary);
    printf("The hike of Rohan is %f\n", facebook[2].hike);

    printf("The name of Kishan is %s\n", facebook[1].name);
    printf("The salary of Kishan is %d\n", facebook[1].salary);
    printf("The hike of Kishan is %f\n", facebook[1].hike);
}