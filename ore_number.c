#include<stdio.h>
#include<math.h>

int check_ore(int num)
{

    int sum =0;
    int div;
    int count=0;
    float alp;
    int ore=0;
    for (div=1;div<=num;div++)
    {
        if(num%div==0)
        {
            count=count+1;
            sum=sum+div;
        }
    }
    alp=(float)(num*count)/sum;
    printf("\n%f",alp);
    if(floor(alp)==ceil(alp))
        ore=1;


    return(ore);

}

int main()
{
    int num,check;
    printf("Enter the number:");
    scanf("%d",&num);
    check=check_ore(num);
    if(check==1)
        printf("\n %d  is an ore number",num);
    else
        printf("\n %d is not an ore number",num);
    return(0);

}

