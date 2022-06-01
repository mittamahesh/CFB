//swapping two number using pointers
#include<stdio.h>
void swap(int *, int *);
int main(){
    int a;
    int b;
    printf(" enter a and b values:");
    scanf("%d%d",&a,&b);
    printf("Value of a and b before swaping: %d and %d\n", a, b);
    swap(&a, &b);
    printf("Value of a and b after swaping: %d and %d\n", a, b);
    return 0;
}
void swap(int* a, int* b){
    int temp;
    temp = *a; 
    *a = *b;
    *b = temp; 
}