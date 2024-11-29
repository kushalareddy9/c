#include<stdio.h>
int main()
{
int h;
printf("Enter height of a person:");
scanf("%d",&h);
if(h>=160)
printf("the person is tall");
else if(h>=130 && h<=160)
printf("the person is medium");
else
printf("the person is short");
}
