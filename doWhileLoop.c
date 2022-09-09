#include <stdio.h>
int main() {
  double number, sum = 0;

  /* do {
    // the body of the loop
     }
     while (Condition); */
  // No matter of condition once do section is execute
  do {
    printf("Enter a number: ");
    scanf("%lf", &number);
    sum += number;
  }
  // If the condition is false it is not gonna execute do section again
  while(number != 0.0);

  printf("Sum = %.2lf",sum);

  return 0;
}
