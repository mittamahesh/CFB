#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int swg(char you, char comp)
{
    if(you==comp)
        return 0;
    else if((you =='s' && comp=='w') ||(you =='s' && comp=='w')||(you =='s' && comp=='w'))
        return 1;
    else   
        return -1;
}


int main()
{
    char you,comp;
    srand(time(0));
    int number=rand()%100+1;
    if(number<33){
        comp='s';
    }
    else if(number<66) 
    {
        comp='w';
    }
    else{
        comp='g';
    }
    
    printf("enter s for snake , w for water and g for gun:");
    scanf("%c",&you);
    int result=swg(you,comp);
    if(result==0)
        printf("game draw");
    else if(result==1)
        printf("game win");
    else
        printf("game loss");

    return 0;

}
