// Write a program to print all Prime numbers under 100
#include<stdio.h>
void prime(int l,int u);
int main()
{
    int a,b;
    printf("Enter the values\n");
    scanf("%d%d",&a,&b);
   prime(a,b);
    }
    void prime(int l,int u)
    {
        int i,x;
        for(x=l;x<=u;x++)
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