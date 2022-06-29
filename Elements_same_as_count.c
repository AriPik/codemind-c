#include<stdio.h>
int main()
{
    int i,j,n,arr[100],c=0,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==arr[i])
        {
            f=1;
            printf("%d ",arr[i]);
            arr[i]=0;
        }
    }
    if(f==0)
    {
        printf("-1");
    }
}