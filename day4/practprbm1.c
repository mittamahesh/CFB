#include<stdio.h>
float celTofar(float);
void main()
{
    float c=5.5;
   // printf("enter celcius:");
    //scanf("%f",&c);
    float f;
     f=celTofar(c);
    printf("%f",f);
}
float celTofar(float c)
{
    float f = (c * 9/5.0) + 32;
    return f;
}