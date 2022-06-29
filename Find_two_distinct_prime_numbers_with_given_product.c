#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    return 1;
    else
    return 0;
}
int main()
{
    int i,j,n,f=0,l,g;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(prime(i))
        {
            for(j=1;j<=n;j++)
            {
                if(prime(j))
                {
                    if(n==i*j)
                    {
                    f=1;
                    l=i;
                    g=j;
                    break;
                    }
                }
            }
        }
    }
    if(f==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",g,l);
    }
}