/*Write a function to calculate LCM of two numbers. (TSRS)*/

#include<stdio.h>
int lcm(int n1,int n2)
{
    int i;
    
    for(i=2;i<=n1*n2;i++)
    {
        if((i%n1==0) && (i%n2==0))
        {
            return i;
        }
    }
}

int main()
{
    int num1,num2;
    printf("Enter two numbers to calculate LCM\n");
    scanf("%d %d",&num1,&num2);
    printf("LCM is= %d",lcm(num1,num2));
    return 0;
}