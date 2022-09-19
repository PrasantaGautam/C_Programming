#include <stdio.h>

void cell (char name[], int age) {
  printf("Hello %s. You are %d years old\n", name, age);
}

int main() {
  cell("Ram", 13);
  cell("Shyam", 24);
  cell("Hari", 40);
  return 0;
}
