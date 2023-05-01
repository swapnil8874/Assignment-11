//Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void prime(int l);
int main()
{
    int a;
    printf("Enter the value\n");
    scanf("%d",&a);
   // printf("Prime Numbers are %d",prime(a,b));
   prime(a);
    }
    void prime(int l)
    {
        int i,x;
        for(x=1;x<=l;x++)
        {
            for(i=2;i<=x;i++)
              {
                if(x%i==0)
                break;
              }
              if(i==x)
              printf(" %d ",x);
        }
        
}