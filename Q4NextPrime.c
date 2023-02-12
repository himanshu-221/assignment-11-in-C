/*Write a function to find the next prime number of a given number. (TSRS)
*/

#include<stdio.h>

int nextprime(int n)
{
    int i,j,temp=n+1;
    for(i=n+1;i<n*2;i++)
    {
        for(j=2;j<i;j++)
        if(i%j==0)
            break;
        
        if(i==j)
            break;
    }
    return i;
}

int main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    printf("Next prime number is= %d \n",nextprime(num));
}