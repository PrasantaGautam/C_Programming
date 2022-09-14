#include <stdio.h>

int main() {
  int num = 43;
  // We use %p as format specifier of 
  // & denotes the address of given identifier after it
  printf("%p", &num);
  return 0;
}
