#include<stdio.h>
#include<conio.h>
int main()
{
int n, s, x, y;
printf("Enter number of rows : ");
scanf("%d",&n);
for(x = 0; x <= n; x++)
{
for(s = n; s > x; s--)
printf(" ");
for(y = 0; y < x; y++)
printf("* ");
printf("\n");
}
for(x = 1; x < n; x++)
{
for(s = 0; s < x; s++)
printf(" ");
for(y = n; y > x;  y--)
printf("* ");
printf("\n");
}
return 0;
}