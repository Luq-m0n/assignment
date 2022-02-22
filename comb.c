#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int outarr[24];
int inparr[4];
int j=0;
void sortascend(int arr[24])
{
    for (int x = 0; x < 24; ++x)
        {
            for (int y = x + 1; y < 24; ++y)
            {
                if (outarr[x] > outarr[y])
                {
                    int a =  outarr[x];
                    outarr[x] = outarr[y];
                    outarr[y] = a;
                }
            }
        }
}
void swap (int *x, char *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int digit_maker(int arr[4])
{
    int sum,res;
    sum=0;
    for(int i=0;i<4;i++)
    {
        res=arr[i]*pow(10,(3-i));
        sum=sum+res;
    }
    return sum;
}
int permutator(int v[], int n)
{
    int i;
    if (n == 1)
        {
            int d=digit_maker(v);
            outarr[j]=d;
            ++j;
        }
    else
        {
        for (i = 0; i < n; i++)
        {
            permutator(v, n-1);
            if (n % 2 == 1)
             {
                swap(&v[0], &v[n-1]);
	         }
            else
            {
                swap(&v[i], &v[n-1]);
            }
	    }

        }
    return(0);
}
int main()
{
    int n=24;
    int k=0;
    int num,div;
    int sum = -1;
    printf("enter the number:");
    scanf("%d",&num);
    while(num>0)
        {
            sum=sum+1;
            div=num%10;
            inparr[sum]=div;
            num=num/10;
    }
    permutator(inparr,4);
    sortascend(outarr);
    while(k<24)
        {
            printf("\n%d\t%d",k,outarr[k]);
            k++;
        }
    printf("\ndifference between largest and smallest \t%d-%d=%d",outarr[n-1],outarr[0],outarr[n-1]-outarr[0]);
    return(0);

}


