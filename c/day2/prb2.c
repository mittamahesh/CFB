#include<stdio.h>
void main()
{
    int marks1,marks2,marks3,total;
    printf("enter marks ");
    scanf("%d %d %d",&marks1,&marks2,&marks3);
total=marks1+marks2+marks3;
if(total>=40)
{
    if(marks1<33 || marks2 <33 || marks3< 33)
         printf("you are failed\n");
    else
         printf(" you are passed:\n");
}
else{
    printf(" you are failed");
}


}