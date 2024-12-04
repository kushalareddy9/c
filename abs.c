//to print abolute value of a number
#include<stdio.h>
#include<stdlib.h>
int x,ab;
int abb(int x);
int main()
{printf("Enter a number\n");
scanf("%d",&x); abb(x);
printf("%d\t",ab);
}
int abb(int x)
{ab = abs(x);
return ab;}


