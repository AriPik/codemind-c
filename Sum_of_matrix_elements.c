#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c];
    int i,j,sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum+=a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}