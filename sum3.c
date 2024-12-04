//sum of two numbers without reutrn type and with argument
#include<stdio.h>
int x,y,s;
void sum(int x,int y);
int main()
{printf("Enter tow numbers\n");
scanf("%d%d",&x,&y);
sum(x,y);
}
void sum(int x,int y)
{s=x+y;
 printf("%d",s);
 }

