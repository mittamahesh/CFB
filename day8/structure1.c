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
    struct  employee mahesh,girish,balaji;
    printf("enter the details for mahesh\n");
    printf("enter name for mahesh");
    scanf("%s",mahesh.name);
    printf("enter salary for mahesh");
    scanf("%d",&mahesh.salary);
    printf("enter hike for mahesh");
    scanf("%f",&mahesh.hike);

    printf("enter the details for girish\n");
    printf("enter name for girish");
    scanf("%s",girish.name);
    printf("enter salary for girish");
    scanf("%d",&girish.salary);
    printf("enter hike for girish");
    scanf("%f",&girish.hike);

    printf("enter the details for balaji\n");
    printf("enter name for balaji");
    scanf("%s",balaji.name);
    printf("enter salary for balaji");
    scanf("%d",&balaji.salary);
    printf("enter hike for balaji");
    scanf("%f",&balaji.hike);
    strcpy(mahesh.name,"balaji");
    mahesh.hike=5.0;
    mahesh.salary=150000;
    printf("the name of the mahesh  is %s\n", mahesh.name);
    printf("the salary of the mahesh is %d\n",mahesh.name);
    printf("the hike of the mahesh is %f\n", mahesh.hike);

    printf("the name of the girish is %s\n", girish.name);
    printf("the salary of the girishis %d\n",girish.name);
    printf("the hike of the girishis %f\n", girish.hike);

    printf("the name of the balaji is %s\n", balaji.name);
    printf("the salary of the balaji is %d\n",balaji.name);
    printf("the hike of the balaji is %f\n", balaji.hike);

}