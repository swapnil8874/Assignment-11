//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fib(int n);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    fib(n);

}
void fib(int n)
{
    int next,pre=0,curr=1;
    printf("%d %d",pre,curr);
    for(int i=2;i<=n;i++)
    {
        next = pre + curr;
        printf(" %d ",next);
        pre=curr;
        curr=next;
    }
}