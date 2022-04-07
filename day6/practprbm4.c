#include<stdio.h>
int reverse(int a[], int n){
int temp;
for (int i = 0; i < n/2; i++)
{
    // Swap i with n-i-1
    temp = a[i];
    a[i] = a[n-i-1];
    a[n-i-1] = temp; 
}
}
void display(int * ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}
void main(){ 
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    display(arr, 9);
    reverse(arr, 9);
    display(arr, 9);
   
}
 