#include<stdio.h>
int x,rn,p=1,bin=0;
void binary(int x);
int main()
{printf("Enter the number\n");
scanf("%d",&x);
binary(x);
}
void binary (int x)
{while (x)
  {rn=x%2;
   x=x/2;
   bin=bin+(rn*p);
   p=p*10;
   
 
   }
   printf("%d",bin);
   }

