#include<stdio.h>
int main()
{
    int n,r,sum=0,x;
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(x==sum)
    {
        printf("True");
    }
    else
      printf("False");
    return 0;
}