#include<stdio.h>
int main()
{
    int range1,range2,i;
    scanf("%d %d",&range1,&range2);
    int num1=0;
    int num2=0;
    for(i=range1;i<=range2;i++)
    {
      num1=i;
      num2=0;
    while(num1!=0)
    {
        int rem=num1%10;
        num1/=10;
        num2=num2*10+rem;
    }
    if(i==num2)
        printf("%d ",i);
    }
}