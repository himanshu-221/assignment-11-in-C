/*Write a function to calculate HCF of two numbers. (TSRS)*/

#include<stdio.h>
int hcf(int n1,int n2)
{
    int i;
    
    for(i=n1<n2?n1:n2;i>=1;i--)
    {
        if((n1%i==0) && (n2%i==0))
        {
            break;
        }
    }
    return i;
}

int main()
{
    int num1,num2;
    printf("Enter two numbers to calculate LCM\n");
    scanf("%d %d",&num1,&num2);
    printf("HCF is= %d",hcf(num1,num2));
    return 0;
}