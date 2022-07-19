//5.Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int n,odd;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>=1)
    {
        odd=2*n-1;
        printf("%d ",odd);
        n--;
    }
    return 0;
}