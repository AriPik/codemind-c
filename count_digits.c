#include<stdio.h>
int main()
{
    int i,n,arr[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
       do
       {
           arr[i]=arr[i]/10;
           c++;
       }
       while(arr[i]!=0);
       {
           printf("%d ",c);
       }
    }
}