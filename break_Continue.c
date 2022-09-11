#include <stdio.h>

int main() {
  // Break
  // break breaks the iteration when it meets condition true
  int i;
  
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    printf("%d\n", i);
  }
  // Continue
  // continue continues after condition meets by leaving that term only
  int j;
  
  for (j = 0; j < 10; j++) {
    if ( j== 4) {
      continue;
    }
    printf("%d\n", j);
  }   
  return 0;
