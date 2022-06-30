#include<stdio.h>
int main()
{
    int i,n,arr[100],s=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            s=s+d;
            arr[i]=arr[i]/10;
        }
}
          printf("%d",s);
}