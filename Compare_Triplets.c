#include<stdio.h>
int main()
{
    int a[100],b[100],i,alice=0,bob=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            alice++;
        }
        if(a[i]<b[i])
        {
            bob++;
        }
    }
    printf("%d %d",alice,bob);
    return 0;
}