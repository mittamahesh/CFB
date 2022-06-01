#include<stdio.h>
void avgSum(float, float, float * , float * );
int main(){
    float a;
    float b;
    printf(" enter a and b values:");
    scanf("%d%d",&a,&b);
    float sum, avg;
    avgSum(a, b, &sum, &avg);
    printf("The value of sum is %f and the value of average is %f", sum, avg);
    return 0;
}
void avgSum(float a, float b, float * ptr1, float * ptr2){
    *ptr1 = a + b;
    *ptr2 = (a + b)/2;
}