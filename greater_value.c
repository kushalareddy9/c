#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a,b,c values:");
scanf("%d%d%d",&a,&b,&c);
if(c<a && a>b)
printf("a is greater");
else if(c<b && b>a)
printf("b is greater");
else
printf("c is greater");
}
