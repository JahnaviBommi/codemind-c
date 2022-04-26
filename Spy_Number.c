#include<stdio.h>
int main()
{
    int k,i,n,d,sum=0,mul=1;
    scanf("%d",&n);
    while(n>0)
    {
    d=n%10;
    n=n/10;
    sum=sum+d;
    mul=mul*d;
    }
    if(sum==mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}