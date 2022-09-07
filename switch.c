#include <stdio.h>

int main() {
  int day = 4;
  // Switch case switch on the code from where switch condition is true
  // So, if we did'nt put break inside the cases we are gonna execute all the code after condition becomes true
  switch (day) {
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thursday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saturday");
      break;
    case 7:
      printf("Sunday");
      break;
  }
    
  return 0;
}
