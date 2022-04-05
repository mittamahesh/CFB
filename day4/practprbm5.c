//sum of first n natural numbers 
#include<stdio.h>
int sum(int);
int main(){
    int n=5;
    printf("Sum of first 3 natural numbers is %d", sum(n));
    return 0;
}
int sum(int n){
    if(n ==1){
        return 1;
    }
    return sum(n-1) + n;
}