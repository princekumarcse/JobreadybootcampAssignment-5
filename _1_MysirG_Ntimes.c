//1.Write a program to print MySirG N times on the screen
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("MysirG\n");
        i++;
    }
    return 0;
}