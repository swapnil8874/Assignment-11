//find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function
#include<stdio.h>
int fact(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
        
    }
    return fact;
}
int main()
{
    int i,n,sum=0;
    printf("Enter The Digit\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(fact(i)/i);
    }
    printf("Sum is %d",sum);
    return 0;
}