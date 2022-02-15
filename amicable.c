#include<stdio.h>
int amicable(int numa,int numb);
int main()
{
int num1,num2;
int c;
printf("Enter the first number:");
scanf("%d",&num1);
printf("Enter the second number:");
scanf("%d",&num2);
c=amicable(num1,num2);
if (c==1)
{
    printf("the given numbers are amicable");

}
else
{
   printf("the given numbers are not amicable");
}


return(0);

}

int amicable(int numa,int numb)

{
    int sum =0;
    int div;
   for (div=1;div<numa;div++)
   {
       if(numa%div==0)
       {
           sum = sum + div;
       }
   }
   if (sum==numb)

   {
       return(1);
   }
   else
   {
       return(0);
   }

}
