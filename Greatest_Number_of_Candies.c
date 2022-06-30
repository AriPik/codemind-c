int max(int *arr,int n)
{
    int i,m;
    m=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }
    return m;
}
#include<stdio.h>
int main()
{
    int i,n,arr[100],k,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        res=max(arr,n);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]+k>=res)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}