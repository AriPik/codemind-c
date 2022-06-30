#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],i,j,k=0,m,n,x,count;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                count = 0;
                for(x=0;x<k;x++)
                {
                    if(a[i]==c[x])
                        count++;
                }
                if(count==0)
                {
                    c[k] = a[i];
                    k++;
                }
            }
        }
    }
        printf("%d ",k);

    return 0;
}