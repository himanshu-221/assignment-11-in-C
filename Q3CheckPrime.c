/* Write a function to check whether a given number is Prime or not. (TSRS)*/

#include<stdio.h>

int prime(int n)
{
    int i;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int num;
    printf("Enetr a number to check prime\n");
    scanf("%d",&num);
    if(prime(num)==1)
    {
        printf("Number is not prime\n");
    }
    else{
        printf("Number is prime\n");
    }
    return 0;
}