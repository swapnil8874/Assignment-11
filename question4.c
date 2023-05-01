//function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int prime(int n);
int main()
{
    int n;
    printf("Enter The Number\n");
    scanf("%d",&n);
    prime(n);
}
int prime(int n)
{   
    for(int i=n;1;i++)
    {
    if((n%2==0)||(n%3==0))
    printf("Not a Prime Number\n");
    else
    printf("This is Prime Number\n");
    }
    return n;
    
}