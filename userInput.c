#include <stdio.h>

int main() {
    
    int num;
    char chara;
    float fnum;
    double dnum;
    // printf used to print something on console
    // Material given inside this -> (" ") is going to print on console
    // scanf used to take input from a user
    // To store data came from user we use this -> & and variable name along with it as given below
    // Must need to give format specifier inside this -> " " to give command to the compiler which types data is taken
    /* Format specifier :
    			%d or %i -> int
    			%s or %c -> char	(%s prefered for string mainly but beter to use)
    			%lf -> double
    			%f -> float
    */
    printf("Enter a integer : ");
    scanf("%d", &num);
    printf("Enter a character : ");
    scanf("%s", &chara);
    printf("Enter a floating point number : ");
    scanf("%f", &fnum);
    printf("Enter a double : ");
    scanf("%lf", &dnum);
    
    return 0;
}
