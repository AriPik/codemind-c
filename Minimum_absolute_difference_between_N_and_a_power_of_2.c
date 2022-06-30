#include<stdio.h>
#include<math.h>
int main()
{
    int i=0,s=0,n,l,x,y;
    scanf("%d",&n);
    while(s<=n)
    {
        s=pow(2,i);
        i=i+1;
    }
    l=s/2;
    x=abs(n-s);
    y=abs(n-l);
    if(x>y)
    printf("%d",y);
    else
    printf("%d",x);
}