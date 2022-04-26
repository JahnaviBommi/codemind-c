#include<stdio.h>
#include<math.h>
int main()
{
    int n,k;
    float x;
    scanf("%d",&n);
    x=sqrt(n);
    k=x;
    if(k==x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}