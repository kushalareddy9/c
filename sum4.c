//sum of two numbers using functions with reutrn type and with argument
#include<stdio.h>
int x,y,s;
int sum(int x,int y);
int main()
{printf("Enter two numbers:\n");
scanf("%d%d",&x,&y);
sum(x,y);
printf("%d\n",s);
}
int sum(int x,int y)
{s=x+y;
return s;}

