#include<stdio.h>
int main()
{
    int n,i,s=0;
    char str[100];
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s*10+a[i];
    }
    s=s+1;
    sprintf(str, "%d", s);
    for(i=0;str[i]!=NULL;i++)
    {
        printf("%c ",str[i]);
    }
}