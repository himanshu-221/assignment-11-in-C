/*Write a function to print all Prime numbers between two given numbers. (TSRN)
*/

#include<stdio.h>
void prime(int a,int b)
{
    int i,j,max,min;
    min=a<b?a:b;
    max=a>b?a:b;
    for(i=min;i<=max;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d\t",i);
    }
}

int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    prime(num1,num2);
    return 0;
}