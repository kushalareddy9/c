#include<stdio.h>
int main()
{
float s,hour,min;
printf("enter seconds value:\n");
scanf("%f",&s);
hour=s/3600;
min=s/60;
printf("convert seconds into hours and min=%f%f\n",hour,min);
}
