#include<stdio.h>
 int main()
 {
     int num,div,sum;

     printf("enter the number:");
     scanf("%d",&num);
     int temp= num;
     while(temp/10!=0)
     {
         sum=0;
         while(temp>0)
         {
             div=temp%10;
             temp=temp/10;
             sum=sum+div;

         }
         temp=sum;
     }
         printf("\n%d",sum);
         if(num%sum==0)
            printf("\n%d is a harshad number",num);
         else
            printf("\n%d is not a harshad number",num);
     return(0);
}

