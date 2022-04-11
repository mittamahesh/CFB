#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *ptr;
    ptr = fopen("matrix1.txt","w");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            fprintf(ptr, " %d ",rand()%10);
        }
        fprintf(ptr,"\n");
    }
    fclose(ptr);
}