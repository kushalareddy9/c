#include<stdio.h>
long long factorial(int num){
long long result = 1;
for(int i =1; i <= num; i++)
{
result *=i;
}
}
int main()
{
int start,end;
printf("enter the start and end of the range:");
scanf("%d%d",&start,&end);
for (int i =start; i <= end; i++)
{
if(i < 0)
{
printf("factorial of %d is not defined\n",i);
}
else
{
printf("%d! = %lld\n", i, factorial(i));
}
}
}
