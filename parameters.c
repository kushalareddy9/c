#include<stdio.h>
main(int a,int b);
int main()
{
int a,b,big;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
big=max(a,b);
printf("Maximum of %d and %d = %d\n",a,b,big);
}
int max(int x, int y)
}
int z;
z=(x>y)?x:y;
return z;
}
