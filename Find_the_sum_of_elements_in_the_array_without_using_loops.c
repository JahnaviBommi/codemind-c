#include <stdio.h>
int operate(int *arr, int n)
{
    int sum = 0, index = 0;
 
label:
    sum += arr[index++];
    if (index < n)
    {
        goto label;
    }
    return sum;
}
int main()
{
    int arr[100],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum = operate(arr,n);  
    printf("%d", sum);
}