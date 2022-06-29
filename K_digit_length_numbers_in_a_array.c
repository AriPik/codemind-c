#include<stdio.h>
int main()
{
    int i,n,arr[100],c=0,k,l=0;
    scanf("%d%d",&n,&k);
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
           if(c==k)
           {
               l++;
           }
       }
    }
    printf("%d",l);
}