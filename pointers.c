#include <stdio.h>

int main() {

  // We can get both memory address and value from a pointer
  int num = 43;  // Variable declaration
  
  int* ptr = &num;  // Pointer declaration 

  // & is Reference operator 
  // %p is format specifier which is used for memoryaddress
  printf("%p\n", ptr);

  // * is Dereference operator 
  // %d is just a specifier for integer value
  printf("%d\n", *ptr);
  
  return 0;
}
