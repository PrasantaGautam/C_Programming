#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter a number : ");
    scanf("%d", &num1);
    printf("Enter another number : ");
    scanf("%d", &num2);
    if (num1 < num2)
    {
        printf("Num2 is greater than Num1");
    }
    else
    {
        printf("Num1 is greater than Num2");
    }
    return 0;
}
