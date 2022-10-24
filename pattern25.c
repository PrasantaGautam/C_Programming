#include<stdio.h>
int main(){
 
    int i,range;
    long int arr[40];
 
    printf("Enter the number range : ");
    scanf("%d",&range);
 
    arr[0]=0;
    arr[1]=1;
 
    for(i=2;i<range;i++){
         arr[i] = arr[i-1] + arr[i-2];
    }
 
    printf("Fibonacci series is: ");
    for(i=0;i<range;i++)
         printf("%ld ",arr[i]);
  
    return 0;
}
