/*Write a function to print first N terms of Fibonacci series (TSRN)
*/

#include<stdio.h>

void fib(int n)
{
    int i, fib=0,fib1=1,fib2=1;
    printf("%d\t%d\t",fib1,fib2);
    for(i=1;i<=n-2;i++)
    {
        fib=fib1+fib2;
        fib2=fib1;
        fib1=fib;
        printf("%d\t",fib);
    }
}

int main()
{
    int num;
    printf("Enter a number to print fibonacci series\n");
    scanf("%d",&num);
    fib(num);
    return 0;
}