#include <stdio.h>
// We can include nth term of elseif on the program
// Here we are taking just one elseif 
int main() {
  int day = 2;
  if (day == 1) {
    printf("Sunday");
  } else if (day == 2) {
    printf("Monday");
  } else {
    printf("Day not set yet or invalid day !");
  }
  return 0;
}
