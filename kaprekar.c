#include<stdio.h>
#include<stdbool.h> // include this file for boolean
#include<math.h>
bool isKaprekarNumber(int n)
{
    if(n==1)
        return true;
    int nSquare = n*n,digitsCount=0;
    while(nSquare)
    {
        digitsCount++;
        nSquare/=10;
    }
    nSquare = n*n;
    for(int i=1;i<digitsCount;i++)
    {
        int parts = pow(10,i);
        if(parts == n)
            continue;
        int sum = nSquare/parts + nSquare%parts;
        printf("\n%d\t%d",nSquare/parts,nSquare%parts);
        printf("\n%d\t%d\t%d\t",i,parts,sum);
        if(sum ==n)
            return true;
    }
    return false;
}
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(isKaprekarNumber(a)== true)
        printf("%d is a Kaprekar number.\n",a);
    else
        printf("%d is not a Kaprekar number.\n",a);
    return 0;
}
