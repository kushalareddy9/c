#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a,b and c values");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("the greater number is %d\n",a);
else if(b>a && b>c)
printf("the greater number is %d\n",b);
else
printf("the greater number is %d\n",c);
}
