#include<stdio.h>
#include<math.h>
 int main() {
     int num,num1,div,rem,q,out;

     int sum = -1;
     printf("enter the number:");
     scanf("%d",&num);
     int temp=num;
     num1=num;

     while(num>0)

        {
            div=num%10;
            num=num/10;
            sum=sum+1;
        }
     int arr[sum];
     int i=0;
     while(out!=num1)
     {
         //printf("\n%d",sum);
         int x=pow(10,sum);
         q=temp/x;
         //printf("\n%d",rem);
         rem=temp%x;
         //printf("\n%d",q);
         out=rem*10+q;
         //printf("\n%d",out);
         arr[i]=out;
         i++;
         temp=out;
      }
      int j =0;
      while(j<=sum)
      {
        printf("\n%d",arr[j]);

        if(arr[0]<arr[j])
            arr[0]=arr[j];

        j++;
      }
      printf("\n\nthe max number in set is %d",arr[0]);
      return(0);
 }

