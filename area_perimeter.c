#include<stdio.h>
#define pi 3.14
int main() 
{
int r,tri,b,h,A,B,C,triperi;
float cir,peri;
printf("Enter r value:");
scanf("%d",&r);
cir=pi*r*r;
peri=2*pi*r;
printf("Area of circle=%f\n",cir);
printf("perimeter of circle=%f\n",peri);
printf("Enter b,h,A,B,C values:");
scanf("%d%d%d%d%d",&b,&h,&A,&B,&C);
tri=0.5*b*h;
triperi=A+B+C;
printf("Area of triangle=%d\n",tri);
printf("Perimeter of triangle=%d\n",triperi);
}
