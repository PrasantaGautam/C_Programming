#include <stdio.h>
#include <string.h>
int main()
{
   // Here, string is reversed using strrev from string.h file
   char s[100];

   printf("Enter a string to reverse\n");
   gets(s);

   strrev(s);

   printf("Reverse of the string: %s\n", s);

   return 0;
}
