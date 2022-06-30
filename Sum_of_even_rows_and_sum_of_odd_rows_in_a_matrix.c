#include<stdio.h>
int main()
{
    int a[100][100],i,j,n,m,s1=0,s2=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i%2==0)
            {
                s1=s1+a[i][j];
            }
            else
            {
                s2=s2+a[i][j];
            }
        }
    }
    printf("%d %d",s1,s2);
    return 0;
}