#include <stdio.h>

int main() {
  int i = 0;
  /*while (condition) {
    // code
  }*/

  // Here if the condition becomes true inside of while will be execute
  // If the condition will be false the while loop is gonna be skipped
  while (i < 5) {
  // %d indicates compiler the place where to print the given variable after comma(,)
  // Remember : %d is for integer value if we are gonna print something else we need to specify their own specifier 
    printf("%d\n", i);
    // i++ used to increment i otherwise i will always same and true if it is true from the begining to end of while
    i++;
  }
  
  return 0;
}
