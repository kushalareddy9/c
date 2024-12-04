#include<stdio.h>
int sum();
int x,y;
int main()
{printf("Enter two numbers:\n");
scanf("%d%d",&x,&y);
sum();
}
int sum()
{int s;s=x+y;
printf("%d",s);}

