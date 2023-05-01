//program in C to find the square of any number using the function
#include<stdio.h>
int square(int num);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The Square of the %d is %d",n,square(n));

}
int square(int num)
{
    int squ;
    return squ=num*num;
}

