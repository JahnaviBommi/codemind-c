#include<stdio.h>
int main()
{
    int n,d,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
    }
    if(temp%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}