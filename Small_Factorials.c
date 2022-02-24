#include<stdio.h>
int main()
{
    int arr[50],fact=1,t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<t;i++)
    {
        fact=1;
        for(j=arr[i];j>0;j--)
        {
            fact*=j;
        }
        printf("%d
",fact);
    }
    return 0;
}