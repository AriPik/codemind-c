#include<stdio.h>
#include<math.h>
int pal(int n)
{
    int d,s=0,temp;
    temp=n;
    while(n!=0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }
    if(s==temp)
    return 1;
    else
    return 0;
}
int main()
{
    int i,n,k,j,m;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(pal(i))
        {
            k=i;
        }
    }
    j=n+1;
    while(1)
    {
        if(pal(j))
        {
            m=j;
            break;
        }
        j=j+1;
    }
    if(abs(n-m)>abs(n-k))
    {
        printf("%d",k);
    }
    else if(abs(n-k)==abs(n-m))
    {
        printf("%d %d",k,m);
    }
    else
    {
        printf("%d",m);
    }
}