#include<stdio.h>
int main()
{
    int i,j,m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    int s_e=0,s_o=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]%2==0)
            {
                s_e+=a[i][j];
            }
            else
            {
                s_o+=a[i][j];
            }
        }
    }
    printf("%d %d",s_e,s_o);
    return 0;
}