#include <stdio.h>
int main()
{
float p1,p2,p3,p4,p5,total_price;
printf("Enter price of each item\n");
scanf("%f%f%f%f%f",&p1,&p2,&p3,&p4,&p5);
total_price=p1+p2+p3+p4+p5;
printf("the total price of all items=%f\n",total_price);
}
