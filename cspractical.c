#include<stdio.h>
int main()
{
    int n,x,sum=0;
    printf("enter a number\n");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    printf("the sum of the digit of the number is %d",sum);
    return 0;
}