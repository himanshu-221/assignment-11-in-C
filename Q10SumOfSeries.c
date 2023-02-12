/* Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function*/

#include<stdio.h>

int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}

int main()
{
    int i, num,result=0;
    printf("Enter a number where to calculate series\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        result+= factorial(i)/i;
    }
    printf("%d\n\n",result);
    return 0;
}