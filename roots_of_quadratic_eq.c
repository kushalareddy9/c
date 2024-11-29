#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c,choice,root1,root2,realpart,imaginarypart;
printf("enter values of a,b and c");
scanf("%f%f%f",&a,&b,&c);
choice = b * b -4 * a * c;

switch((choice > 0) -(choice < 0)) 
{
case 1://choice >0
root1 = (-b + sqrt(choice)) / (2 * a);
root2 = (-b - sqrt(choice)) / (2 * a);
printf("roots are real and different.\n");
printf("root 1 = %.2f\n",root1);
printf("root 2 = %.2f\n",root2);
break;
case 0://choice ==0
root2 =root2 = -b /(2 * a);
printf("roots are real and the same \n");
printf("root1 = root2 = %2f\n",root1);
break;
case -1://choice < 0
realpart = -b / (2 * a);
imaginarypart = sqrt(-choice) / (2 * a);
printf("roots are complex and different \n");
printf("root1 = %2f + %2fi\n",realpart,imaginarypart);
printf("root2 = %2f - %efi\n",realpart,imaginarypart);
break;
default :
printf("invalid choice\n");
break;
}
printf("the program is done");
}
