/*. Write a program in C to find the square of any number using the function.*/

#include<stdio.h>
#include<math.h>

int main()
{
    int num,x;
    printf("Enter a number \n");
    scanf("%d",&num);
   // x=pow(num,2);
    printf("%.0f",pow(num,2));
    return 0;
}
