//pointers
#include<stdio.h>
int main(){
    int i = 72;
    int j = 723;
    printf("The address of i and j is %u and %u\n", &i, &j);
    printf("The value of i and j is %d and %d\n", *(&i), *(&j));
    return 0;
}