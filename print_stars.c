#include<stdio.h>
int main()
{
int rows = 3;
for(int i =0; i < rows; i++)
{
int numstars=2 *i+1;
for (int j = 0;j < numstars; j++)
{
printf("*");
}
printf("\n");
}
}
