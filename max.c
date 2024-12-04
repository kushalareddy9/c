#include<stdio.h>
int x,y,z,maxi;
int max(int x,int y,int z);
int main()
{printf("Enter the three numbers\n");
scanf("%d%d%d",&x,&y,&z);
max(x,y,z);
printf("maximum number is:%d\n",maxi);}
int max(int x,int y,int z)
{if(x>y&&x>z) 
maxi = x;
 else if (y>z) 
 maxi = y;
  else maxi = z;
  return maxi;}
