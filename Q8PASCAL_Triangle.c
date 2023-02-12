/*Write a function to print PASCAL Triangle. (TSRN)
*/

#include<stdio.h>
int fact(int n)
{
    int f=1;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    return f;
}

int comb(int n,int r)
{
    int c;
    c=fact(n)/(fact(r)*(fact(n-r)));
    return c;
}
void pascal(int n)
{
    int i,j,k,r;
    for(i=1;i<=n;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i && j<=n-1+i &&k)
            {
                printf("%d",comb(i-1,r));
                k=0;
                r++;
            }
            else{
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}


int main()
{
    int num;
    printf("Enter no. of rows\n");
    scanf("%d",&num);
    pascal(num);
    return 0;
}