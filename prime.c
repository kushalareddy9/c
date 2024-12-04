#include<stdio.h>
int x,c=1;
int prime(int x);
int main()
{
printf("Enter a number\n");
scanf("%d",&x);
prime(x);
}
int prime(int x)
{for (c=1;c<=x;c++)
 {if (x%c==0)
   {if (c==1) printf("Given number is a prime number");
    else printf("Given number is not a prime number");}
    }
    
    }
