//Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int a,int b);
int main()
{
    int a,b;
    printf("Enter The value of\n");
    scanf("%d%d",&a,&b);
    hcf(a,b);
    return 0;

}
int hcf(int a,int b)
{
    int hcf;
    int min = a<b?a:b;
    for(int i=2;i<=min;i++)
    {
        if((a%i==0)&&(b%i==0))
        hcf = i;
    }
    printf("HCF is %d",hcf);
     return hcf;
}

