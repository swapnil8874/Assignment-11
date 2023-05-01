//Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int comb(int n,int r);
int fact(int n);
void pascal(int n);
int main()
{
    int n;
    printf("Enter the Pascal value\n");
    scanf("%d",&n);
    pascal(n);
}
int comb(int n,int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}
int fact(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
        
    }
    return fact;
}
void pascal(int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" %d ",comb(i,j));

        }
        printf("\n");
    }
}