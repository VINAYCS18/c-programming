#include <stdio.h>
#include <math.h>

int factorial(int num)
{
 int i,fact=1;
 for(i=1;i<=num;i++)
 {
  fact=fact*i;
 }
 return(fact);
}

float Series(int n)
{
    int i;
    float sums = 0;
    for (i = 1; i <= n; i++)
        sums += (float)pow(i,i)/factorial(i);
    return sums;
}

void main()
{
    int n ;
    printf("Enter the number");
    scanf("%d",&n);
    float res = Series(n);
    printf("%f", res);
}
