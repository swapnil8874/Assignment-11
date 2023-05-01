#include<stdio.h>
int lcm(int a,int b);
int hcf(int a,int b);
int main()
{
    int a,b;
    printf("Enter The value of\n");
    scanf("%d%d",&a,&b);
    printf("LCM IS %d",lcm(a,b));
    return 0;

}
int lcm(int a,int b)
{    int Lcm;
    return Lcm=(a*b)/(hcf(a,b));

}
int hcf(int a,int b)
{
    int hcf;
    int min = a<b?a:b;
    for(int i=2;i<=min;i++)
    {
        if((a%i==0)&&(b%i==0))
        hcf = i;
    //printf("HCF is %d",hcf);
   

    }
     return hcf;
}

