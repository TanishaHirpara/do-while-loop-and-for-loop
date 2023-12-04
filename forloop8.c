#include<stdio.h>

int main()
{
    int i, n, sum=0;

    printf("Enter the value of N = ");
    scanf("%d", &n);

    
    for(i=1; i<=n; i++)
    {
        sum += i;
    }

    printf(" Sum of 1 to %d = %d", n, sum);

}