//10.Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter Table of Your Choise:");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
    return 0;
}