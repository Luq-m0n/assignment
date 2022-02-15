#include<stdio.h>
int sod(int num);
int main()
{
int n;
int n1;
printf("Enter the number:");
scanf("%d",&n);
n1=sod(sod(n));
printf("%d",n1);
if(n1==(n*2))
    printf("\n%d is a super perfect number",n);
else
    printf("\n%d is not a super perfect number",n);

return(0);


}
int sod(int num)
{

    int sum =0;
    int div;
    for (div=1;div<=num;div++)
    {
        if(num%div==0)
        {
            sum=sum+div;
        }
    }

    return(sum);
}
