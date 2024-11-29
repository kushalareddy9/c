#include<stdio.h>
int square(int);
int main()
{
int num,squr;
printf("Enter a number\n");
scanf("%d",&num);
squr=square(num);
printf("Square of %d = %d\n", num,squr);
}
int square(int x)
{
return(x*x);
}
