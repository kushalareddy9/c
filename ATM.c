#include<stdio.h>
void atm(char cont,int opt,int dep,int wit,int x);
char cont;
int opt, dep,wit;
int x=1234,p,rs=100000;
int main()
{printf("Enter your PIN:\n");
scanf("%d",&p);
if(p==x)
{atm(cont,opt,dep,wit,x);
}
else printf("Incorrect PIN\n");
}
void atm(char cont,int opt,int dep,int wit,int x)
{printf(" Choose an option\n1.DEPOSIT\n2.WITHDRAW\n3.PIN CHANGE\n4.CASH BALANCE\n5.EXIT\n");
 scanf("%d" ,&opt);
 switch(opt)
 {
 case 1:
   {
     printf("Enter the amount to be deposited:\n");
     scanf("%d", &dep);
     rs+=dep;
     printf("Savings Amount:%d\n",rs);
     break;
     }
case 2:
{
   printf("Enter the amount to be withdrawn\n");
   scanf("%d",&wit);
   if(rs==0||rs>wit)
   {
    printf("No sufficient Balance\n");
   }
   else 
   {
    rs-=wit;
    printf("Successfully withdrawn\n");
    printf("Current Savings Amount: %d \n", rs);
    }
    break;
}
case 3:
{printf("Enter the new PIN\n");
 scanf("%d",&x);
 printf("Do you want to continue(y/n):\n");
 scanf("%c",&cont);
 if(cont == 'y') 
 atm(cont,opt,dep,wit,x);
 break;
 }
 case 4:
 {
 printf("Current Balance:%d\n",rs);
 break;
   }
 case 5:
 printf("Thnak You!!\n");
 }
 }
    
     
     


