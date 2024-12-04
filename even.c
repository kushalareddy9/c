//to find if a number is even or odd with argument ,without return type
#include<stdio.h>
int x;
void even(int x);
int main()
{printf("Enter a number:\n");
scanf("%d",&x);
 even(x);}
 void even (int x)
 {if (x%2==0) printf("Given numebr is even\n");
  else printf("Given number is odd\n");
  }
 


