//function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime(int n);
int main()
{
    int i,n;
    printf("Enter The Number\n");
    scanf("%d",&n);
    prime(n);
}
int prime(int n)
{   
    if((n%2==0)||(n%3==0))
    printf("Not a Prime Number\n");
    else
    printf("This is Prime Number\n");
    return n;
    
}