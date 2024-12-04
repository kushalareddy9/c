//without argument ,with reuturn type
#include<stdio.h>
int x,y,s;
int sum();
int main()
{printf("Enter two numbers");
scanf("%d%d",&x,&y);
sum();
printf("%d",s);
}
int sum()
{s=x+y;
 return s;}


