#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
         sum+=i;
    }
    if(sum>n)
      printf("True");
    else
      printf("False");
    return 0;
}