#include<stdio.h>

int check_nature(int num)
{
    int sum =0;
    int div;
    int flag=0;
    for (div=1;div<=num;div++)
    {
        if(num%div==0)
        {
            sum=sum+div;
        }
    }
    if(sum>(num*2))
        flag=1;

    return(flag);

}

int main()
{
    int num,chck;
    printf("Enter the number:");
    scanf("%d",&num);
    chck=check_nature(num);
    if(chck==1)
        printf("%d is an excessive/abundant number",num);
    else
        printf("%d is a deficient/defective number",num);

    return(0);

}
