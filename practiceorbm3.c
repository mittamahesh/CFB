/*evaluate expresion step by step*/
#include<stdio.h>
void main()
{
    int x=2;
    int y=3;
    int k=1;
    int z=3;
    float result= 3.0*x /y-z+k;
    //9/y-z+k
    //3-z+k
    //3-4
    //-1
    printf("the value of result is %f",result);
}