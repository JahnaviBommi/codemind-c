#include<stdio.h>
int main()
{
    int n,i,r,count=0,e=0,o=0;
    scanf("%d",&n);
 
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        {
            e++;
        }
        else if(r%2!=0)
        {
            o++;
        }
        n=n/10;
        count++;
    }
    if(count!=e && count!=o)
    {
        printf("Mixed");
    }
    else if(count==e)
    {
        printf("Even");
    }
    else if(count==o)
    {
        printf("Odd");
    }
}