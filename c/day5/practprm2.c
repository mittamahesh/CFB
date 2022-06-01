#include<stdio.h>
void func(int *);
int main(){
    int i;
    printf("enter the i value:");
    scanf("%d",&i);
    func(&i);
    printf("The address of i is %u\n", &i);
    printf("The value of i is %d\n", *(&i));
    return 0;
}
void func(int * ptr){
    printf("The value of address ptr from function func is %u\n", ptr);
}