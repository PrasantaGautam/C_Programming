#include <stdio.h>
int main() {
  int n, rev = 0, rem, temp;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // 
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    // 
    printf("Reverse : %d", rev);

    return 0;
}