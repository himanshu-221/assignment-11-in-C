/*Write a function to print first N prime numbers (TSRN)*/

#include<stdio.h>
void nprime(int num)
{
   int i,j,temp=0;
   for(i=1;i<=num;i++)
   {
        for(j=2;j<i/2;j++)
        {
            if(i%j==0)
                temp++;
        }
        if(temp==0)
        printf("%d\t",i);
        else
        temp=0;
   }
}

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    nprime(num);
    return 0;
}