#include <stdio.h>  
  
int main(void) {  
  int n;  
  printf("Enter only the odd number : ");  
  scanf("%d", &n);  
  for(int i=1;i<=n;i++)  
  {  
    if(i==((n/2)+1))  
    {  
      for(int j=1;j<=n;j++)  
      {  
        printf("+");  
      }  
   
    }  
    else  
    {  
    for(int j=1;j<=n/2;j++)  
    {  
      printf(" ");  
    }  
    printf("+");  
    }  
    printf("\n");  
  }  
  return 0;  
}  
