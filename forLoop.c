#include <stdio.h>

int main() {
  int i;

  /* for (initialization; condition; increment/decrement) {
       Code
  } */
  // Here we initialize i = 0, condiiton is to run code until i is less than 5 and then i is incremented
  for (i = 0; i < 5; i++) {
    // printf prints i every time when program enter this loop
    // %d is used for locate where to print integer which is declared after the comma 
    // \n is used for new line
    printf("%d\n", i);
  }
  
  return 0;
}
