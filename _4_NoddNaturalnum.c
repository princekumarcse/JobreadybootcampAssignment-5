//4.Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
   int  i=1,n,odd;
   printf("Enter a number:");
   scanf("%d",&n);
   while(i<=n)
   {
    odd=2*i-1;
    printf("%d ",odd);
    i++;
   }
   return 0;
}